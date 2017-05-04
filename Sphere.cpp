
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

Color Sphere::getColor() {
    return color;
}

void Sphere::setColor(const Color &color) {
    Sphere::color = color;
}

double Sphere::findIntersection(Ray ray) {

    /*
     * Let P be the origin (vantage point) of the ray, d be the direction vector of the ray
     * All of the points on the ray can be represented as
     *
     *          (P + td) for some t >= 0
     *
     * A point X on the sphere has the property
     *
     *          (X - Q) = r,
     *
     * where Q is the center of the sphere and r is the radius of the sphere
     * Then,
     *          (X - Q) dot (X - Q) = r*r
     *
     * Plug (P + td) for X,
     *
     *      ((P + td) - Q) dot ((P + td) - Q) = r*r
     *
     * Let v be (P - Q), above can be simplified as
     *
     *      t = (-(2d dot v) +- sqrt(4*(d dot v)(d dot v) - 4*(d dot d)((v dot v) - r*r))) / (2*(d dot d))
     *
     * If we are representing ray with vector d that has unit length,
     *
     *      (d dot d) = 1
     *
     */

    Vector ray_origin = ray.getOrigin(); // P
    double ray_origin_x = ray_origin.getX();
    double ray_origin_y = ray_origin.getY();
    double ray_origin_z = ray_origin.getZ();

    Vector ray_dir = ray.getDirection(); // d
    double ray_dir_x = ray_dir.getX();
    double ray_dir_y = ray_dir.getY();
    double ray_dir_z = ray_dir.getZ();

    Vector sphere_center = center; // Q
    double sphere_center_x = sphere_center.getX();
    double sphere_center_y = sphere_center.getY();
    double sphere_center_z = sphere_center.getZ();

    // a := d dot d
    double a = ray_dir.DotProduct(ray_dir);

    // v := (P - Q)

    // b := 2d dot v
    double b = (2 * (ray_origin_x - sphere_center_x) * ray_dir_x) +
            (2 * (ray_origin_y - sphere_center_y) * ray_dir_y) +
            (2 * (ray_origin_z - sphere_center_z) * ray_dir_z);

    // c := (v dot v) - r*r
    double c = pow(ray_origin_x - sphere_center_x, 2) +
            pow(ray_origin_y - sphere_center_y, 2) +
            pow(ray_origin_z - sphere_center_z, 2) - (radius * radius);

    double discriminant = b * b - 4 * c * a; // b*b - 4ac
    if (discriminant > 0) { // two solutions to the equation, the ray intersects with the sphere
        // the first root
        double root_1 = ((-1 * b - sqrt(discriminant)) / (2*a)) - 0.000001;

        if (root_1 > 0) {
            // the first root is the smallest positive root
            return root_1;
        } else {
            // the second root is the smallest positive root
            double root_2 = ((sqrt(discriminant) - b) / (2*a)) - 0.000001;
            return root_2;
        }
    } else {
        // the ray missed the sphere or there is only one intersection point
        return -1;
    }

}

Vector Sphere::getNormalAt(Vector point) {
    //normal always points in a direction away from the center of the sphere
    Vector normal_vec = (point + center.Negative()).Normalize();
    return normal_vec;
}
