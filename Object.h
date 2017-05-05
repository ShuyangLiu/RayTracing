
#ifndef RAYTRACING_OBJECT_H
#define RAYTRACING_OBJECT_H

#include "Ray.h"
#include "Vector.h"
#include "Color.h"


struct hit_record {
    double t;
    Vector p;
    Vector normal;
};


class Object {
public:
    Object();
    virtual ~Object();
    virtual Color getColor()= 0;
    virtual double findIntersection(Ray ray, double t_min, double t_max, hit_record &rec)= 0;
};


#endif