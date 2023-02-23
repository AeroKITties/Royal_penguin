#ifndef BAROMETRINTERFACE_H
#define BAROMETRINTERFACE_H

class BarometrInterface{
    virtual void init(){};

    virtual void calibrate(){};

    virtual int get_pressure(){return 0;};

    virtual int get_altitude(){return 0;};

    virtual int get_temperature(){return 0;};
};

#endif
