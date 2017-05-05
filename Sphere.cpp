
#include <stdlib.h>
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

double Sphere::findIntersection(Ray ray, double t_min, double t_max) {

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
    Vector ray_dir = ray.getDirection(); // d
    Vector sphere_center = this->center; // Q
    double sphere_r = this->radius;

    // a := d dot d
    double a = ray_dir.DotProduct(ray_dir);

    // v := (P - Q)
    Vector v = ray_origin - sphere_center;

    // b := 2d dot v
    double b = ray_dir.Multiply(2).DotProduct(v);

    // c := (v dot v) - r*r
    double c = (v.DotProduct(v)) - sphere_r*sphere_r;

    double discriminant = b * b - 4 * c * a; // b*b - 4ac
    if (discriminant > 0) { // two solutions to the equation, the ray intersects with the sphere
        // the first root
        double root_1 = ((-1 * b - sqrt(discriminant)) / (2 * a)) - 0.000001;
        if (root_1 > t_min && root_1 < t_max) {
            return root_1;
        } else {
            double root_2 = ((sqrt(discriminant) - b) / (2 * a)) - 0.000001;
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

Vector Sphere::random_in_unit_sphere() {
    Vector p;
    do {
        p = Vector(drand48(), drand48(), drand48()).Multiply(2.0) - Vector(1.0,1.0,1.0);
    } while (p.DotProduct(p) >= 1.0);
    return p;
}
