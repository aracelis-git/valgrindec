#pragma once

#include <iostream>

class AnalogSensor
{
public:
    AnalogSensor(int samples);
    ~AnalogSensor();
    int Read();
private:
    int mSamples;
};
