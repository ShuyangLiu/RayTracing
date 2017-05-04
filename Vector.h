#ifndef RAYTRACING_VECTOR_H
#define RAYTRACING_VECTOR_H

class Vector {
double x, y, z;
public:
    Vector() {};
    virtual ~Vector();

    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);
    double getZ() const;
    void setZ(double z);

    Vector(double X, double Y, double Z):x(X), y(Y), z(Z){};
    Vector Add(Vector vec);
    Vector Subtract(Vector vec);
    Vector Multiply(double scalar);
    double DotProduct(Vector vec);
    Vector CrossProduct(Vector vec);
    double Magnitude();
    double MagnitudeSquared();
    Vector UnitVector();
    Vector Normalize();
    Vector Negative();

    Vector operator + (Vector vec);
    Vector operator - (Vector vec);
    Vector operator = (Vector vec);
    Vector operator +=(Vector vec);
    Vector operator -=(Vector vec);
    Vector operator *=(Vector vec);
    Vector operator /=(Vector vec);
    Vector operator -();
};

#endif
