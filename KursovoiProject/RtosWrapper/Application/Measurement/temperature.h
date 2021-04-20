#pragma once
#include "Measurement.h"
#include <cassert>

Unit temperatureUnits[3]={K,C,F};

class Temperature: public Measurement
{
public:
  Temperature(string quantityName, double(*DataSourceFcn)())
    :Measurement(quantityName, temperatureUnits, 3, C, DataSourceFcn){}
  
  virtual double GetValue()
  {
    return DataSourceFcn();
  }
  virtual double GetValue(Unit unit)
  {
    double value;
    switch(unit)
    {
    case C:
      value = Measurement::GetValue();
      break;
    case K:
      value = GetValue()+273.15;
      break;
    case F:
      value = GetValue()*1.8+32.0;
      break;
    default:
      assert(false &&"unit must match measurement's units");
      break;
    }
    return value;
  }
};