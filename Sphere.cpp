
#include "Sphere.h"

Sphere::Sphere(const Vector &center, double radius, const Color &color) : center(center), radius(radius),
                                                                          color(color) {}

Sphere::~Sphere() {

}

Sphere::Sphere() {
    center = Vector(0,0,0);
    radius = 1.0;
    color = Color(0.5,0.5,0.5,0);
}

const Vector &Sphere::getCenter() const {
    return center;
}

void Sphere::setCenter(const Vector &center) {
    Sphere::center = center;
}

double Sphere::getRadius() const {
    return radius;
}

void Sphere::setRadius(double radius) {
    Sphere::radius = radius;
}

const Color &Sphere::getColor() const {
    return color;
}

void Sphere::setColor(const Color &color) {
    Sphere::color = color;
}

double Sphere::findIntersection(Ray ray) {
    Vector ray_origin = ray.getOrigin();
    double ray_origin_x = ray_origin.getX();
    double ray_origin_y = ray_origin.getY();
    double ray_origin_z = ray_origin.getZ();

    Vector ray_dir = ray.getDirection();
    double ray_dir_x = ray_dir.getX();
    double ray_dir_y = ray_dir.getY();
    double ray_dir_z = ray_dir.getZ();

    Vector sphere_center = center;
    double sphere_center_x = sphere_center.getX();
    double sphere_center_y = sphere_center.getY();
    double sphere_center_z = sphere_center.getZ();

    double a = 1;
    double b = (2 * (ray_origin_x - sphere_center_x) * ray_dir_x) +
            (2 * (ray_origin_y - sphere_center_y) * ray_dir_y) +
            (2 * (ray_origin_z - sphere_center_z) * ray_dir_z);
    double c = pow(ray_origin_x - sphere_center_x, 2) +
            pow(ray_origin_y - sphere_center_y, 2) +
            pow(ray_origin_z - sphere_center_z, 2) - (radius * radius);



}

Vector Sphere::getNormalAt(Vector point) {
    //normal always points in a direction away from the center of the sphere
    Vector normal_vec = (point + center.Negative()).Normalize();
    return normal_vec;
}
