#pragma once
#include "thread.hpp"
#include "ledconfig.h"
#include "measurementconfig.h"
#include "event.hpp";
#include "bme280driverConfig.h"
using namespace OsWrapper;
class MeasurementTask:public Thread<128U>
{
  Event& event;
public:
  const std::chrono::milliseconds period = 100ms;
  
  MeasurementTask(Event& event):event(event){}
  
  void Execute() override
  {

    for(;;)
    { 
      bme280.Measure();
      Led2::Toggle();
      Sleep(period);
      
      if (event.Wait() != 0)
        {
          UnitsUpdate();
        }
      
    }
  }
  
  
   void UnitsUpdate()
  {
    static int counter = 0;
    
    counter=(counter<2)?(counter+1):0;
    switch(counter)
    {
    case 0:
      userUnits[0]=F;
      userUnits[3]=F;
      break;
    case 1:
      userUnits[0]=K;
      userUnits[3]=K;
      break;
    case 2:
      userUnits[0]=C;
      userUnits[3]=C;
      break;
    }
  }
};