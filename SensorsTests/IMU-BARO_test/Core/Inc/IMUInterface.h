#ifndef IMUIMTERFACE_H
#define IMUIMTERFACE_H

#include "Vector3.h"

struct IMUInterface{
    virtual void init(){};

    virtual void calibrate_accel(){};
    virtual void calibrate_hyro(){};
    virtual void calibrate_mag(){};

    virtual Vector3 get_accel_data(){return Vector3{};};
    virtual Vector3 get_gyro_data(){return Vector3{};};
    virtual Vector3 get_mag_data(){return Vector3{};};
};

#endif
