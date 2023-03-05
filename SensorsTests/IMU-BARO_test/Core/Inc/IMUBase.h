#ifndef IMUBASE_H
#define IMUBASE_H

#include "Vector3.h"

struct IMUBase{
    virtual void init() {};

    virtual void calibrate_accel() {};
    virtual void calibrate_hyro() {};
    virtual void calibrate_mag() {};

    virtual Vector3i get_accel_data() {return Vector3i{};};
    virtual Vector3i get_gyro_data() {return Vector3i{};};
    virtual Vector3i get_mag_data() {return Vector3i{};};
};

#endif
