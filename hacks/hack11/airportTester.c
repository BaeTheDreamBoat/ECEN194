/**
 * Ryan Brown
 * 11/12/22
 * 
 * A number of test cases for the airport library
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "airport.h"

int main(int argc, char **argv){
    printf("This is just a test\n");
    char gpsid[5]="gpsid";
    char type[4]="type";
    char name[4]="name";
    double latitude=10.2;
    double longitude=52.7;
    int elevationFeet=5;
    char city[4]="city";
    char countryAbbrv[5]="Abbrv";
    Airport *port1=(Airport *)malloc(sizeof(Airport)*1);
    port1 = createAirport(const char* gpsId,
                  const char* type,
                  const char* name,
                  double latitude,
                  double longitude,
                  int elevationFeet,
                  const char* city,
                  const char* countryAbbrv);

    return 1;
}