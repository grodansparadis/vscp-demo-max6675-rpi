#LIBTYPE=WIRINGPI
LIBTYPE=PIGPIO
#LIBTYPE=PIGPIOIF2

#INCLIBS=-lwiringPi
INCLIBS=-lpigpio -lpthread
#INCLIBS=-lpigpiod_if2 -lpthread

all: logger6675 

logger6675: logger6675.c max6675.c max6675.h
	gcc  -D$(LIBTYPE) -Wall -o logger6675 logger6675.c max6675.c $(INCLIBS)

clean:
	rm -f logger6675
	rm -f *.o

