//
// Created by shuyang on 5/4/17.
//

#ifndef RAYTRACING_PLANE_H
#define RAYTRACING_PLANE_H


#include "Object.h"

class Plane : public Object{
    Vector normal;
    double distance;
    Color color;

public:
    Plane();
    virtual ~Plane();

    Plane(const Vector &normal, double distance, const Color &color);
    const Vector &getNormal() const;
    void setNormal(const Vector &normal);
    double getDistance() const;
    void setDistance(double distance);
    Color getColor();
    void setColor(const Color &color);

    Vector getNormalAt(Vector point);
    double findIntersection(Ray ray, double t_min, double t_max, hit_record &rec);

};


#endif
