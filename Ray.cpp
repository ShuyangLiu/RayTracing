#include "Ray.h"

Ray::Ray(const Vector &origin, const Vector &direction) : vantage(origin), direction(direction) {}

Ray::Ray() {
    Ray::vantage     = Vector(0,0,0);
    Ray::direction  = Vector(1,0,0);
}

const Vector &Ray::getOrigin() const {
    return vantage;
}

void Ray::setOrigin(const Vector &origin) {
    Ray::vantage = origin;
}

const Vector &Ray::getDirection() const {
    return direction;
}

void Ray::setDirection(const Vector &direction) {
    Ray::direction = direction;
}

Vector Ray::pointAtParameter(double t) {
    return vantage + (direction*t);
}



