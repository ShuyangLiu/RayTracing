#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include <sys/time.h>
#include <thread>
#include <mutex>

#include "Vector.h"
#include "Ray.h"
#include "Camera.h"
#include "Color.h"
#include "Sphere.h"
#include "Plane.h"

using namespace std;

mutex g_lock;

// representing a color
struct RGBType {
    double r, g, b;
};

// Some global variables
int CurrentPixel;
int dpi = 500;
int width = 1920*2;
int height = 1080*2;
RGBType *pixels;
double aspect_ratio = (double)width / (double) height;

vector<Object*> scene_objects;

// Origin
Vector O (0,0,0);

// 3-D Coordinate system
Vector X (1,0,0);
Vector Y (0,1,0);
Vector Z (0,0,1);

// A function for saving bmp files
// Referenced from https://en.wikipedia.org/wiki/User:Evercat/Buddhabrot.c
void SaveBMP(const char *filename, int w, int h, int dpi, RGBType *data) {
    FILE *f;
    int k = w*h; // k is the total number of pixels
    int s = 4*k;
    int FileSize = 54 + s;
    double factor = 39.375;
    int m = static_cast<int> (factor);
    int ppm = dpi*m;
    unsigned char bmpFileHeader[14] = {'B', 'M', 0,0,0,0, 0,0,0,0, 54,0,0,0};
    unsigned char bmpInfoHeader[40] = {40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0,24,0};

    bmpFileHeader[ 2] = (unsigned char) (unsigned)(FileSize);
    bmpFileHeader[ 3] = (unsigned char) (unsigned)(FileSize >> 8);
    bmpFileHeader[ 4] = (unsigned char) (unsigned)(FileSize >> 16);
    bmpFileHeader[ 5] = (unsigned char) (unsigned)(FileSize >> 24);

    bmpInfoHeader[ 4] = (unsigned char) (unsigned)(w);
    bmpInfoHeader[ 5] = (unsigned char) (unsigned)(w >> 8);
    bmpInfoHeader[ 6] = (unsigned char) (unsigned)(w >> 16);
    bmpInfoHeader[ 7] = (unsigned char) (unsigned)(w >> 24);

    bmpInfoHeader[ 8] = (unsigned char) (unsigned)(h);
    bmpInfoHeader[ 9] = (unsigned char) (unsigned)(h >> 8);
    bmpInfoHeader[10] = (unsigned char) (unsigned)(h >> 16);
    bmpInfoHeader[11] = (unsigned char) (unsigned)(h >> 24);

    bmpInfoHeader[21] = (unsigned char) (unsigned)(s);
    bmpInfoHeader[22] = (unsigned char) (unsigned)(s >> 8);
    bmpInfoHeader[23] = (unsigned char) (unsigned)(s >> 16);
    bmpInfoHeader[24] = (unsigned char) (unsigned)(s >> 24);

    bmpInfoHeader[25] = (unsigned char) (unsigned)(ppm);
    bmpInfoHeader[26] = (unsigned char) (unsigned)(ppm >> 8);
    bmpInfoHeader[27] = (unsigned char) (unsigned)(ppm >> 16);
    bmpInfoHeader[28] = (unsigned char) (unsigned)(ppm >> 24);

    bmpInfoHeader[29] = (unsigned char) (unsigned)(ppm);
    bmpInfoHeader[30] = (unsigned char) (unsigned)(ppm >> 8);
    bmpInfoHeader[31] = (unsigned char) (unsigned)(ppm >> 16);
    bmpInfoHeader[32] = (unsigned char) (unsigned)(ppm >> 24);

    f = fopen(filename, "wb");
    fwrite(bmpFileHeader, 1, 14, f);
    fwrite(bmpInfoHeader, 1, 40, f);

    for (int i = 0; i < k; ++i){
        RGBType rgb = data[i];
        double red = rgb.r*255;
        double green = rgb.g*255;
        double blue = rgb.b*255;

        unsigned char color[3] = {(unsigned char) (int)floor(blue), (unsigned char) (int)floor(green),
                                  (unsigned char) (int)floor(red)};
        fwrite(color, 1, 3, f);

    }

    fclose(f);
}

int ClosestIndex(vector<double> intersections){
    // find the index of the closest intersection point
    if(intersections.size() == 0){
        return -1;
    } else if (intersections.size() == 1) {
        if(intersections.at(0) > 0){
            return 0;
        } else {
            return -1;
        }
    } else {
        // find the smallest positive value
        double min = numeric_limits<double>::max();
        int index = -1;
        for (int i = 0; i < intersections.size(); ++i) {
            if(intersections.at((unsigned long) i) > 0 && intersections.at((unsigned long) i) < min){
                min = intersections.at((unsigned long) i);
                index = i;
            }
        }
        return index;
    }
}

Color getColorAt(Ray cam_ray, vector<Object*> world) {
    vector<double> intersections;
    for (int i = 0; i < scene_objects.size(); ++i) {
        // determine whether the ray intersect with each object in the scene
        intersections.push_back(scene_objects.at((unsigned long) i)->findIntersection(cam_ray, 0.0, numeric_limits<double>::max()));
    }
    int closest_index = ClosestIndex(intersections);
    if(closest_index != -1){
        double intersection_t = intersections.at((unsigned long) closest_index);
        scene_objects.at((unsigned long) closest_index)->findIntersection(cam_ray, 0.0, numeric_limits<double>::max()); // store values to rec
        Color obj_col = scene_objects.at((unsigned long) closest_index)->getColor();
        Vector p = cam_ray.pointAtParameter(intersection_t);
        Vector target = p + scene_objects.at((unsigned long) closest_index)->getNormalAt(p) +
                Sphere::random_in_unit_sphere();
        return getColorAt(Ray(p, target - p), world) * 0.85 * obj_col;
    } else {
        Vector unit_dir = cam_ray.getDirection();
        unit_dir = unit_dir.UnitVector();
        double t = 0.5 * (unit_dir.getY() + 0.5);
        return Color((1.0-0.5*t), (1.0-0.3*t), 1.0, 0.0);
    }
}

void AddObject(){
    // Preset Colors
    Color white_light(1.0,1.0,1.0,0.0);
    Color pretty_green(0.5,1.0,0.5,0.3);
    Color maroon(0.5,0.25,0.25, 0);
    Color grey(0.5,0.5,0.5,0.0);
    Color black(0,0,0,0);

    // Adding a sphere and a plane to the scene
    Sphere *scene_sphere = new Sphere(O, 1.0, pretty_green);
    Sphere *scene_sphere_2 = new Sphere(Vector(-2,0,0), 1.0, pretty_green);
    Sphere *scene_sphere_3 = new Sphere(Vector(1,1,0), 1.0, white_light);
    Plane *scene_plane = new Plane(Y, -1, maroon);

    scene_objects.push_back(dynamic_cast<Object*>(scene_sphere));
    scene_objects.push_back(dynamic_cast<Object*>(scene_sphere_2));
    scene_objects.push_back(dynamic_cast<Object*>(scene_sphere_3));
    scene_objects.push_back(dynamic_cast<Object*>(scene_plane));

}

void func1 (int y_start, int y_end, Camera cam) {

    Vector cam_ray_origin = cam.getCamPos();
    Vector camdir = cam.getCamDir();
    Vector camright = cam.getCamRight();
    Vector camdown = cam.getCamDown();

    int x_start = 0;
    int x_end = width;

    for(int x = x_start; x < x_end; ++x){
        for(int y = y_start; y < y_end; ++y) {

            double xamnt, yamnt;
            if (width > height) {
                // the image is wider than it is tall
                xamnt = ((x + 0.5) / width) * aspect_ratio - (((width - height) / (double) height) / 2);
                yamnt = ((height - y) + 0.5) / height;
            }
            else if (height > width) {
                // the imager is taller than it is wide
                xamnt = (x + 0.5)/ width;
                yamnt = (((height - y) + 0.5) / height) / aspect_ratio - (((height - width) / (double)width) / 2);
            }
            else {
                // the image is square
                xamnt = (x + 0.5) / width;
                yamnt = ((height - y) + 0.5) / height;
            }

            Vector cam_ray_direction = (camdir + (camright.Multiply(xamnt - 0.5) + camdown.Multiply(yamnt - 0.5))).Normalize();

            // Casting a ray from scene_cam through current pixel
            Ray cam_ray (cam_ray_origin, cam_ray_direction);

            // determine the color for current pixel
            CurrentPixel = y*width+x;

            g_lock.lock();
                Color cc = getColorAt(cam_ray, scene_objects);
            g_lock.unlock();

            RGBType col;
            col.r = cc.getRed();
            col.g = cc.getGreen();
            col.b = cc.getBlue();
            pixels[CurrentPixel] = col;


        }
    }

}


int main(int argc, char const *argv[])
{

    pixels = new RGBType[width*height];

    const int t = 8; // number of threads

    struct timeval t1, t2;

    // Camera Setting
    Vector campos (3, 1.5, -4);
    Vector look_at (0, 0, 0);
    Vector diff_btw (campos.getX() - look_at.getX(), campos.getY() - look_at.getY(), campos.getZ() - look_at.getZ());
    Vector camdir = diff_btw.Negative().Normalize();
    Vector camright = Y.CrossProduct(camdir).Normalize();
    Vector camdown = camright.CrossProduct(camdir);
    Camera scene_cam (campos, camdir, camright, camdown);

    //Add Objects into scene
    AddObject();
    cout << "rendering ..." << endl;

    // distribute work into threads
    array<int, t> work_distribution;
    int ave = height / t;
    int rem = height % t;
    for (int j = 0; j < t; ++j) {
        work_distribution[j] = ave;
    }
    for (int j = 0; j < rem; ++j) {
        work_distribution[j] += 1;
    }
    int start_row = 0;

    gettimeofday(&t1, 0);
    thread *t_list = new thread[t];
    for (int i = 0; i < t; ++i) {
        t_list[i] = thread (func1, start_row, (start_row+work_distribution[i]), scene_cam);
        start_row += work_distribution[i];
    }
    for (int k = 0; k < t; ++k){
        t_list[k].join();
    }
    gettimeofday(&t2, 0);

    // Save the image
    SaveBMP("scene.bmp", width, height, dpi, pixels);
    fprintf(stdout, "Total Time:  %f seconds\n", (t2.tv_sec - t1.tv_sec) + (t2.tv_usec - t1.tv_usec) * 0.000001);

    return 0;
}


