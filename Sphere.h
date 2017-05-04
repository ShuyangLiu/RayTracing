#ifndef RAYTRACING_SPHERE_H
#define RAYTRACING_SPHERE_H

#include "Vector.h"
#include "Color.h"
#include "Object.h"
#include <math.h>

class Sphere : public Object{

    Vector center;
    double radius;
    Color color;

public:
    Sphere();
    virtual ~Sphere();

    Sphere(const Vector &center, double radius, const Color &color);
    const Vector &getCenter() const;
    void setCenter(const Vector &center);
    double getRadius() const;
    void setRadius(double radius);
    const Color &getColor() const;
    void setColor(const Color &color);

    double findIntersection(Ray ray);
    Vector getNormalAt(Vector point);


};


#endif