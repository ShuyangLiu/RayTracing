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

Color::~Color() {}

double Color::brightness() {
    return (red+green+blue)/3;
}

Color Color::colorScale(double scale) {
    return Color(red*scale, green*scale, blue*scale, special);
}

Color Color::Add(Color color) {
    return Color(red+color.getRed(), green+color.getGreen(), blue+color.getBlue(), special);
}

Color Color::Multiply(Color color) {
    return Color(red*color.getRed(), green*color.getGreen(), blue*color.getBlue(), special);
}

Color Color::Average(Color color) {
    return Color((red+color.getRed())/2, (green+color.getGreen())/2, (blue+color.getBlue())/2, special);
}

Color Color::operator-() {
    return Color(-1*red, -1*green, -1*blue, special);
}

Color Color::operator*(Color color) {
    return Multiply(color);
}

Color Color::operator*(double k) {
    return colorScale(k);
}

Color Color::operator/(double k) {
    return Color(red/k,green/k, blue/k, special);
}

Color Color::operator+=(Color color) {
    red += color.getRed();
    green += color.getGreen();
    blue += color.getBlue();
    return *this;
}
Color Color::operator-=(Color color) {
    red -= color.getRed();
    green -= color.getGreen();
    blue -= color.getBlue();
    return *this;
}
Color Color::operator*=(Color color) {
    red *= color.getRed();
    green *= color.getGreen();
    blue *= color.getBlue();
    return *this;
}

Color Color::operator/=(Color color) {
    red /= color.getRed();
    green /= color.getGreen();
    blue /= color.getBlue();
    return *this;
}
