#ifndef RAYTRACING_COLOR_H
#define RAYTRACING_COLOR_H


class Color {

    double red, green, blue, special;
public:
    Color();
    virtual ~Color();

    Color(double red, double green, double blue, double special);
    double getRed() const;
    void setRed(double red);
    double getGreen() const;
    void setGreen(double green);
    double getBlue() const;
    void setBlue(double blue);
    double getSpecial() const;
    void setSpecial(double special);
};


#endif //RAYTRACING_COLOR_H
