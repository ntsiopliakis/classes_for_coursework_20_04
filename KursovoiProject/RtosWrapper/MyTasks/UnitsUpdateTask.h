#pragma once
#include "thread.hpp"
#include "event.hpp"
#include "measurementconfig.h"
using namespace OsWrapper;
class UnitsUpdateTask:public Thread<128U>
{
private:
  Event& event;
  public:
    UnitsUpdateTask(Event& event):event(event){}
    void Execute() override
    {
      static int counter = 0;
      for(;;)
      {
        if (event.Wait() != 0)
        {
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
      }
    }
};