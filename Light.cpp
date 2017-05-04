//
// Created by shuyang on 5/3/17.
//

#include "Light.h"

Light::Light(const Vector &position, const Color &color) : position(position), color(color) {}

Light::Light() {
    position = Vector(0,0,0);
    color = Color(1,1,1,0);
}

const Vector &Light::getPosition() const {
    return position;
}

void Light::setPosition(const Vector &position) {
    Light::position = position;
}

const Color &Light::getColor() const {
    return color;
}

void Light::setColor(const Color &color) {
    Light::color = color;
}

Light::~Light() {

}
