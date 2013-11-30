/*
 * common.c
 *
 *  Created on: Nov 27, 2013
 *      Author: Anil Jangam
 */

#include <stdio.h>
#include <stdlib.h>

#include "common.h"

int compareInt (const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

void convertToStr(char* str, int nodeId) {
	memset(str, '\0', 6);
	sprintf(str, "%d", nodeId);
}
