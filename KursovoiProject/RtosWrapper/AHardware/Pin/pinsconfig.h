#pragma once
#include "pin.h"         // for Pin
#include "portsconfig.h" // for PortC, PortA

using PinLed1 = Pin<PortA, 5>;
using PinLed2 = Pin<PortC, 9>;
using PinLed3 = Pin<PortC, 8>;
using PinLed4 = Pin<PortC, 5>;

using PinButton = Pin<PortC, 13>;

using PinCSforBME280 = Pin<PortC, 6>;

using PinCSforEPD = Pin<PortB, 13>;
using PinDCforEPD = Pin<PortB, 14>;
using PinRSTforEPD = Pin<PortB, 15>;
using PinBSYforEPD = Pin<PortB, 1>;