//
// Created by shuyang on 5/4/17.
//

#include "Plane.h"

Plane::Plane() {
    normal = Vector(1,0,0);
    distance = 0.0;
    color = Color(0.5,0.5,0.5,0);
}

Plane::~Plane() {

}

Plane::Plane(const Vector &normal, double distance, const Color &color) : normal(normal), distance(distance),
                                                                          color(color) {}

const Vector &Plane::getNormal() const {
    return normal;
}

void Plane::setNormal(const Vector &normal) {
    Plane::normal = normal;
}

double Plane::getDistance() const {
    return distance;
}

void Plane::setDistance(double distance) {
    Plane::distance = distance;
}

Color Plane::getColor() {
    return color;
}

void Plane::setColor(const Color &color) {
    Plane::color = color;
}

Vector Plane::getNormalAt(Vector point) {
    return normal;
}

double Plane::findIntersection(Ray ray) {
    Vector ray_direction = ray.getDirection();
    double a = ray_direction.DotProduct(normal); //d dot n
    if(a == 0){
        // ray is parallel to the plane, either contained in the plane or disjointed with the plane
        return -1;
    } else {
        Vector ray_origin = ray.getOrigin(); // Q
        double b = normal.DotProduct(ray_origin + (normal.Multiply(distance).Negative()));
        return -1*b/a;
    }
}
