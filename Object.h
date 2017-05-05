
#ifndef RAYTRACING_OBJECT_H
#define RAYTRACING_OBJECT_H

#include "Ray.h"
#include "Vector.h"
#include "Color.h"


class Object {

public:
    Object();
    virtual ~Object();
    virtual Color getColor()= 0;
    virtual Vector getNormalAt(Vector point)= 0;
    virtual double findIntersection(Ray ray, double t_min, double t_max)= 0;
};


#endif