#include "BARO_ms5611.h"

Barometr::Barometr() {
    MS5611_DISABLE;
}

void Barometr::init() {
    Barometer_init();
}

void Barometr::calibrate() {
    //FIXME
}

int Barometr::get_pressure(){
    return Barometer_getPressure(1);
}

int Barometr::get_altitude(){
    return Barometer_getAltitude(1);
}

int Barometr::get_temperature(){
    return Barometer_getTemp(1);
}
