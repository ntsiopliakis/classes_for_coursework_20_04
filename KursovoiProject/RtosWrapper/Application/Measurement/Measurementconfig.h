#pragma once
#include "Measurement.h"
#include "Temperature.h"
#include "bme280driverconfig.h"
double fcnTemp()
{
  return bme280.temperature;
};

double fcnPress()
{
  return bme280.pressure;
};

double fcnHum()
{
  return bme280.humidity;
};

double fcnDewP()
{
  return bme280.dewPoint;
};

inline Temperature temperature("Temperature", fcnTemp);

inline Measurement pressure("Pressure", hPa, fcnPress);
inline Measurement humidity("Humidity", percent, fcnHum);

inline Temperature dewPoint("Dew point",  fcnDewP);

inline Measurement* measurements[4] = {&temperature, &pressure, &humidity, &dewPoint};
inline Unit userUnits[4]={F, hPa, percent, F};