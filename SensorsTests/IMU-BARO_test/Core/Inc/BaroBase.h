#ifndef BAROBASE_H
#define BAROBASE_H

class BaroBase{
    virtual void init() {};

    virtual void calibrate() {};

    virtual int get_pressure() {return 0;};

    virtual int get_altitude() {return 0;};

    virtual int get_temperature() {return 0;};
};

#endif
