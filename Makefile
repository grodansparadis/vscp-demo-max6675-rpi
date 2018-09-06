all: 6675

6675: 6675.c
	gcc  -Wall -o6675 6675.c max6675.c -lwiringPi

clean:
	rm 6675
	rm *.o

