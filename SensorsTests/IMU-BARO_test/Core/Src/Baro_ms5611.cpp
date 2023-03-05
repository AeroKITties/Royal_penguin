#include <Baro_ms5611.h>

Baro::Baro() {
    MS5611_DISABLE;
}

void Baro::init() {
    Barometer_init();
}

void Baro::calibrate() {
    //FIXME
}

int Baro::get_pressure() {
    return Barometer_getPressure(1);
}

int Baro::get_altitude() {
    return Barometer_getAltitude(1);
}

int Baro::get_temperature() {
    return Barometer_getTemp(1);
}
