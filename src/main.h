#pragma once
#include <Arduino.h>

#include "WiFiconfig.h"

#ifndef STATIC_WIFI
#define MANAGED_WIFI
#endif


// CC pins
#define CCDEBUG_CLK 19
#define CCDEBUG_DATA 23
#define CCDEBUG_RESET 33

void set_firmware_file(String firmware, int file_size);
void set_firmware_dump_file(String firmware, int file_size);