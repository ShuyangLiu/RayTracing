
#include "Vector.h"
#include <math.h>

Vector Vector::Add(Vector vec) {
    return Vector(x+vec.x, y+vec.y, z+vec.z);
}

Vector Vector::Subtract(Vector vec) {
    return Vector(x-vec.x, y-vec.y, z-vec.z);
}

Vector Vector::Multiply(double scalar) {
    return Vector(x*scalar, y*scalar, z*scalar);
}

double Vector::DotProduct(Vector vec) {
    return (x*vec.x)+(y*vec.y)+(z*vec.z);
}

double Vector::Magnitude() {
    return sqrt((x*x) + (y*y) + (z*z));
}

Vector Vector::UnitVector() {
    return Vector((x/Magnitude()), (y/Magnitude()), (z/Magnitude()));
}

Vector Vector::CrossProduct(Vector vec) {
    return Vector((y*vec.z) - (z*vec.y), (z*vec.x) - (x*vec.z), (x*vec.y) - (y*vec.x));
}

double Vector::MagnitudeSquared() {
    return (x*x) + (y*y) + (z*z);
}

Vector Vector::operator+(Vector vec) {
    return Add(vec);
}

Vector Vector::operator-(Vector vec) {
    return Subtract(vec);
}

Vector Vector::Normalize() {
    return UnitVector();
}

Vector Vector::Negative() {
    return Vector(x*(-1.0), y*(-1.0), z*(-1.0));
}

double Vector::getX() const {
    return x;
}

void Vector::setX(double x) {
    Vector::x = x;
}

double Vector::getY() const {
    return y;
}

void Vector::setY(double y) {
    Vector::y = y;
}

double Vector::getZ() const {
    return z;
}

void Vector::setZ(double z) {
    Vector::z = z;
}

Vector::~Vector() {

}

Vector Vector::operator=(Vector vec) {
    x = vec.getX();
    y = vec.getY();
    z = vec.getZ();
    return *this;
}

Vector Vector::operator+=(Vector vec) {
    x += vec.getX();
    y += vec.getY();
    z += vec.getZ();
    return *this;
}

Vector Vector::operator-=(Vector vec) {
    x -= vec.getX();
    y -= vec.getY();
    z -= vec.getZ();
    return *this;
}

Vector Vector::operator*=(Vector vec) {
    x *= vec.getX();
    y *= vec.getY();
    z *= vec.getZ();
    return *this;
}

Vector Vector::operator/=(Vector vec) {
    x /= vec.getX();
    y /= vec.getY();
    z /= vec.getZ();
    return *this;
}

Vector Vector::operator-() {
    return Negative();
}


