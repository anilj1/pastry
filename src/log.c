/*
 * log.c
 *
 *  Created on: Nov 21, 2013
 *      Author: Anil Jangam
 */

#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INFO "Info"
#define DEBUG "Debug"
#define ERROR "Error"

void log_debug(const char* message) {
   time_t now;
   time(&now);
   printf("%s [%s]: %s\n", ctime(&now), DEBUG, message);
}

void log_error(const char* message) {
   time_t now;
   time(&now);
   printf("%s [%s]: %s\n", ctime(&now), ERROR, message);
}

void log_info(const char* message) {
   time_t now;
   time(&now);
   printf("%s [%s]: %s\n", ctime(&now), INFO, message);
}
