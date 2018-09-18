all: logger6675

logger6675: logger6675.c
	gcc  -Wall -o logger6675 logger6675.c max6675.c -lwiringPi

clean:
	rm -f logger6675
	rm -f *.o

