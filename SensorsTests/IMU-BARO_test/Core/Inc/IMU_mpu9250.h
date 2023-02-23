#ifndef INERTIALSENSOR_H
#define INERTIALSENSOR_H

#include "IMUInterface.h"
#include "MPU9250.h"

#define MPU9250_ENABLE HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, GPIO_PIN_RESET)
#define MPU9250_DISABLE HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, GPIO_PIN_SET)

struct InertialSensor : public IMUInterface {
private:
    int16_t AccData[3], GyroData[3], MagData[3];
    void data_update();
public:
    InertialSensor();

    void init(SPI_HandleTypeDef* hspi);

    void calibrate_accel() override;
    void calibrate_hyro() override;
    void calibrate_mag() override;

    Vector3 get_accel_data() override;
    Vector3 get_gyro_data() override;
    Vector3 get_mag_data() override;
};

#endif
