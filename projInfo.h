//Auto-generated by avrCommon.mk

#ifndef __PROJINFO_H__
#define __PROJINFO_H__
#include <inttypes.h>

#if (defined(_PROJINFO_OVERRIDE_) && _PROJINFO_OVERRIDE_)
 const uint8_t __attribute__ ((progmem)) \
   header[] = "";
#elif (defined(PROJINFO_SHORT) && PROJINFO_SHORT)
 const uint8_t __attribute__ ((progmem)) \
   header[] = "puarTesttestMega328p 2014-12-30 19:24:25";
#else //projInfo Not Shortened nor overridden
 const uint8_t __attribute__ ((progmem)) \
   header0[] = " /home/meh/_commonCode/polled_uar/0.51-gitHubbing/testMega328p ";
 const uint8_t __attribute__ ((progmem)) \
   header1[] = " Tue Dec 30 19:24:25 PST 2014 ";
 const uint8_t __attribute__ ((progmem)) \
   headerOpt[] = "  ";
#endif

//For internal use...
//Currently only usable in main.c
#define PROJ_VER testMega328p
#define COMPILE_YEAR 2014

#endif

