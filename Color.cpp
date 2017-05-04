//
// Created by shuyang on 5/3/17.
//

#include "Color.h"

Color::Color(double red, double green, double blue, double special) : red(red), green(green), blue(blue),
                                                                      special(special) {}

double Color::getRed() const {
    return red;
}

void Color::setRed(double red) {
    Color::red = red;
}

double Color::getGreen() const {
    return green;
}

void Color::setGreen(double green) {
    Color::green = green;
}

double Color::getBlue() const {
    return blue;
}

void Color::setBlue(double blue) {
    Color::blue = blue;
}

double Color::getSpecial() const {
    return special;
}

void Color::setSpecial(double special) {
    Color::special = special;
}

Color::Color() {red = 0.5; green = 0.5; blue = 0.5; special = 0;}

Color::~Color() {

}
