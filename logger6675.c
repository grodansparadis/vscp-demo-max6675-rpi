#include <unistd.h> 
#include <stdlib.h>
#include <stdio.h>

#include "max6675.h"

int main(void) {
	max6675_t *max6675 = MAX6675Setup(0);

	if ( NULL != max6675 ) {
		while(1) {
			printf("%0.2fC %0.2fK %0.2fF\n", 
				MAX6675GetTempC(max6675),
				MAX6675GetTempK(max6675),
				MAX6675GetTempF(max6675)
			);

			sleep(1);
		}

		// We never actually get here
		MAX6675Free( max6675 );
	}
}
