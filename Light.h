#ifndef RAYTRACING_LIGHT_H
#define RAYTRACING_LIGHT_H

#include "Vector.h"
#include "Color.h"

class Light {
    Vector position;
    Color color;

public:
    Light(const Vector &position, const Color &color);
    Light();

    virtual ~Light();

    const Vector &getPosition() const;
    void setPosition(const Vector &position);
    const Color &getColor() const;
    void setColor(const Color &color);
};


#endif //RAYTRACING_LIGHT_H
