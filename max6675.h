#ifndef MAX6675_H
#define MAX6675_H

typedef enum {
    MAX6675_CELSIUS,
    MAX6675_KELVIN,
    MAX6675_FAHRENHEIT
} MAX6675TempScale;


typedef struct max6675 {	
    int m_pi;			// Used by pigpioif2 
    int m_handle;		// Used by pigpio/pigpioif2
    int m_SpiChannel;
    MAX6675TempScale m_scale; 	// Temperature unit
} max6675_t;

max6675_t * MAX6675Setup( int spi_channel ); 
void MAX6675Free( max6675_t *handle );

void MAX6675SetScale( max6675_t *handle, MAX6675TempScale scale );
MAX6675TempScale MAX6675GetScale( max6675_t *handle );

float MAX6675GetTempC( max6675_t *handle );
float MAX6675GetTempK( max6675_t *handle );
float MAX6675GetTempF( max6675_t *handle );

float MAX6675GetTemp( max6675_t *handle );

#endif
