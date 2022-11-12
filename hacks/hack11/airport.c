/**
 * Ryan Brown
 * 10/12/22
 * 
 * Deffinitions for functions for the airport library
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "airport.h"

Airport* createAirport(const char* gpsId,
                       const char* type,
                       const char* name,
                       double latitude,
                       double longitude,
                       int elevationFeet,
                       const char* city,
                       const char* countryAbbrv){

}

void initAirport(Airport* airport,
                 const char* gpsId,
                 const char* type,
                 const char* name,
                 double latitude,
                 double longitude,
                 int elevationFeet,
                 const char* city,
                 const char* countryAbbrv){

}

char* airportToString(const Airport* a){

}

double getAirDistance(const Airport* origin, const Airport* destination){

}

double getEstimatedTravelTime(const Airport* stops,
                              int size,
                              double aveKmsPerHour,
                              double aveLayoverTimeHrs){

}