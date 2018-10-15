# VSCP MAX6675 thermocouple i/f demo code for Raspberry Pi

![VSCP Logo](https://www.vscp.org/images/logo_200.png)


This is work based on work done by Matthew Robinson (https://github.com/mttrb)

Enable spi interface with **raspi-config** before building. Also define version to build in the Makefile before building as of below

 * WIRINGPI - using the wiringpi library
 * PIGPIO - using the pigpio library (must be root)
 * PIGPIOIF2 - using the pigpio library and the pigpiod daemon (user space available)

Copyright -2018 Matthew Robinson - https://github.com/mttrb
Copyright 2018 Changes and VSCP demo adoption [Ake Hedman, Grodans Paradis AB](akhe@grodansparadis.com)

