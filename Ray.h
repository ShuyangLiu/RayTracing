#ifndef RAYTRACING_RAY_H
#define RAYTRACING_RAY_H


#include "Vector.h"

class Ray {

    Vector vantage, direction;
public:
    Ray();
    Ray(const Vector &origin, const Vector &direction);
    const Vector &getOrigin() const;
    void setOrigin(const Vector &origin);
    const Vector &getDirection() const;
    void setDirection(const Vector &direction);

    Vector pointAtParameter(double t);

};


#endif
