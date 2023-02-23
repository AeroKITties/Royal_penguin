#include "IMU_mpu9250.h"

InertialSensor::InertialSensor() {
    MPU9250_DISABLE;
}

void InertialSensor::data_update() {
    MPU9250_GetData(AccData, GyroData, MagData);
}

void InertialSensor::init(SPI_HandleTypeDef* hspi){
    //ref_hspi1 <- hspi1
    MPU9250_Init(hspi);
}

void InertialSensor::calibrate_accel(){
    //FIXME
}

void InertialSensor::calibrate_hyro(){
    //FIXME
}

void InertialSensor::calibrate_mag(){
    //FIXME
}

Vector3 InertialSensor::get_accel_data(){
    data_update();
    return Vector3{AccData[0], AccData[1], AccData[2]};
}

Vector3 InertialSensor::get_gyro_data(){
    data_update();
    return Vector3{GyroData[0], GyroData[1], GyroData[2]};
}

Vector3 InertialSensor::get_mag_data(){
    data_update();
    return Vector3{MagData[0], MagData[1], MagData[2]};
}
