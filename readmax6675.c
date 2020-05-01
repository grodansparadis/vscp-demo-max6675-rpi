///////////////////////////////////////////////////////////////////////////////
// readmax6675.h:
//
// This file is part of the VSCP (http://www.vscp.org) 
//
// The MIT License (MIT)
// 
// Copyright -2018 Matthew Robinson - https://github.com/mttrb
// Copyright (c) 2000-2018 Ake Hedman, Grodans Paradis AB <info@grodansparadis.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE./

#include <unistd.h> 
#include <stdlib.h>
#include <stdio.h>

#include "max6675.h"

int main(void) {
	max6675_t *max6675 = MAX6675Setup(1);

	if ( NULL != max6675 ) {

		printf("%0.2f", MAX6675GetTempC(max6675) );

		if ( -1 == max6675->m_OpenSensor) {
			printf("Warning! Open sensor detected!\n");
                     	max6675->m_OpenSensor = 0; // Reset
			return -1;
		}

		// We never actually get here
		MAX6675Free( max6675 );
	}
	else {
	    printf("Faild to initialise the library\n");	
	    return -1;
	}
}
