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

    Airport *port1 = createAirport("1231",
                                    "small",
                                    "Bob",
                                    34.53,
                                    -25.24,
                                    1000,
                                    "Pitsberg",
                                    "NA");
    initAirport(port1,
                "1231",
                "small",
                "Bob",
                34.53,
                -25.24,
                1000,
                "Pitsberg",
                "NA");                                
    char *strPort1=(char *)malloc(sizeof(char)*strlen(airportToString(port1)));
    strPort1=airportToString(port1);

    Airport *port2 = createAirport("1232",
                                    "Big",
                                    "Mark",
                                    65.81,
                                    -81.51,
                                    2000,
                                    "Colorado",
                                    "NA");
    initAirport(port1,
                "1232",
                "Big",
                "Mark",
                65.81,
                -81.51,
                2000,
                "Colorado",
                "NA");                                
    char *strPort2=(char *)malloc(sizeof(char)*strlen(airportToString(port2)));
    strPort2=airportToString(port2);
    double dist1=getAirDistance(port1, port2);

    printf("%s\n", strPort1);
    printf("%s\n", strPort2);
    printf("%f\n",dist1);

    return 1;
}