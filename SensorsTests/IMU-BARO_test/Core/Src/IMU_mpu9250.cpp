#include "IMU_mpu9250.h"

IMU::IMU() {
    MPU9250_DISABLE;
}

void IMU::data_update() {
    MPU9250_GetData(AccData, GyroData, MagData);
}

void IMU::init(SPI_HandleTypeDef* hspi) {
    //ref_hspi1 <- hspi1
    MPU9250_Init(hspi);
}

void IMU::calibrate_accel() {
    //FIXME
}

void IMU::calibrate_hyro() {
    //FIXME
}

void IMU::calibrate_mag() {
    //FIXME
}

Vector3i IMU::get_accel_data() {
    data_update();
    return Vector3i{AccData[0], AccData[1], AccData[2]};
}

Vector3i IMU::get_gyro_data() {
    data_update();
    return Vector3i{GyroData[0], GyroData[1], GyroData[2]};
}

Vector3i IMU::get_mag_data() {
    data_update();
    return Vector3i{MagData[0], MagData[1], MagData[2]};
}
