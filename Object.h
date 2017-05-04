
#ifndef RAYTRACING_OBJECT_H
#define RAYTRACING_OBJECT_H

#include "Ray.h"
#include "Vector.h"
#include "Color.h"

class Object {
public:
    Object();
    virtual ~Object();
    virtual Color getColor();
    virtual double findIntersection(Ray ray);
};


#endif