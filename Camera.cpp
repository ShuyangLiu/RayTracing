//
// Created by shuyang on 5/3/17.
//

#include "Camera.h"

Camera::Camera(const Vector &CamPos, const Vector &CamDir, const Vector &CamRight, const Vector &CamDown) : CamPos(
        CamPos), CamDir(CamDir), CamRight(CamRight), CamDown(CamDown) {}

const Vector &Camera::getCamPos() const {
    return CamPos;
}

void Camera::setCamPos(const Vector &CamPos) {
    Camera::CamPos = CamPos;
}

const Vector &Camera::getCamDir() const {
    return CamDir;
}

void Camera::setCamDir(const Vector &CamDir) {
    Camera::CamDir = CamDir;
}

const Vector &Camera::getCamRight() const {
    return CamRight;
}

void Camera::setCamRight(const Vector &CamRight) {
    Camera::CamRight = CamRight;
}

const Vector &Camera::getCamDown() const {
    return CamDown;
}

void Camera::setCamDown(const Vector &CamDown) {
    Camera::CamDown = CamDown;
}

Camera::Camera() {
    Camera::CamPos = Vector(0,0,0);
    Camera::CamDir = Vector(0,0,1);
    Camera::CamRight = Vector(0,0,0);
    Camera::CamDown = Vector(0,0,0);
}

Camera::~Camera() {

}
