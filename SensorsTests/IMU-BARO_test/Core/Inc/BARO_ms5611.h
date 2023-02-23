#ifndef BARO_MS5611_H
#define BARO_MS5611_H

#include "BarometrInterface.h"
#include "barometer.h"
#include "usb_device.h"

#define MS5611_ENABLE HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_RESET)
#define MS5611_DISABLE HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_SET)

struct Barometr: public BarometrInterface{
    Barometr();

    void init() override;

    void calibrate() override;

    int get_pressure() override;

    int get_altitude() override;

    int get_temperature() override;
};

#endif
