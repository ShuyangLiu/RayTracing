#ifndef RAYTRACING_CAMERA_H
#define RAYTRACING_CAMERA_H


#include "Vector.h"

class Camera {

    Vector CamPos, CamDir, CamRight, CamDown;
public:
    Camera();
    virtual ~Camera();

    Camera(const Vector &CamPos, const Vector &CamDir, const Vector &CamRight, const Vector &CamDown);
    const Vector &getCamPos() const;
    void setCamPos(const Vector &CamPos);
    const Vector &getCamDir() const;
    void setCamDir(const Vector &CamDir);
    const Vector &getCamRight() const;
    void setCamRight(const Vector &CamRight);
    const Vector &getCamDown() const;
    void setCamDown(const Vector &CamDown);

};


#endif
