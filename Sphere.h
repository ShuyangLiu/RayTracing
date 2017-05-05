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
    Color getColor();
    void setColor(const Color &color);

    double findIntersection(Ray ray, double t_min, double t_max, hit_record &rec);
    Vector getNormalAt(Vector point);
    static Vector random_in_unit_sphere();

};


#endif
