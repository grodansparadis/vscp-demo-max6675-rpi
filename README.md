# VSCP MAX6675 thermocouple C i/f demo code for Raspberry Pi

![VSCP Logo](https://www.vscp.org/images/logo_200.png)


This is work based on work done by Matthew Robinson (https://github.com/mttrb)

Enable spi interface with **raspi-config** before building. Also define version to build in the Makefile before building as of below

 * WIRINGPI - using the wiringpi library
 * PIGPIO - using the pigpio library (must be root)
 * PIGPIOIF2 - using the pigpio library and the pigpiod daemon (user space available)

## pigpio

The pigpio library is described [here](https://abyz.me.uk/rpi/pigpio/)

On Debian systems install with

```bash
sudo apt install pigpio pigpiod
```

The pigpiod daemon must be running to run this code. To have it started on boot

```bash
sudo systemctl enable pigpiod
```

Manually start service with

```bash
sudo systemctl start pigpiod 
```

and stop with

```bash
sudo systemctl start pigpiod 
```





Copyright -2018 Matthew Robinson - https://github.com/mttrb <br/>
Copyright 2018-2024 Changes and VSCP demo adoption [Ake Hedman, Grodans Paradis AB](akhe@grodansparadis.com)

