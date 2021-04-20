#pragma once
#include "EPDDriver.h"
#include "spiconfig.h"
#include "pinsconfig.h"

inline EPDDriver4inch2<spi1Transceiver,PinCSforEPD, PinDCforEPD, PinRSTforEPD, PinBSYforEPD> epDisplay;
