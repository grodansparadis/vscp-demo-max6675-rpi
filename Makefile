# Select one gpio lib to build for below

USELIB=WIRINGPI
#USELIB=PIGPIO
#USELIB=PIGPIOD

ifeq ($(USELIB),PIGPIO)
INCLIBS=-lpigpio -lpthread
FLAGS=-DPIGPIO
else ifeq ($(USELIB),PIGPIOD)
INCLIBS=-lpigpiod_if2 -lpthread
FLAGS=-DPIGPIOIF2
else ifeq ($(USELIB),WIRINGPI)
INCLIBS=-lwiringPi
FLAGS=-DWIRINGPI
endif

all: logger6675 readmax6675 

logger6675: logger6675.c max6675.c max6675.h
	gcc  $(FLAGS) -Wall -o logger6675 logger6675.c max6675.c $(INCLIBS)

readmax6675: readmax6675.c max6675.c max6675.h
	gcc  $(FLAGS) -Wall -o readmax6675 readmax6675.c max6675.c $(INCLIBS)

clean:
	rm -f logger6675
	rm -f readmax6675
	rm -f *.o

