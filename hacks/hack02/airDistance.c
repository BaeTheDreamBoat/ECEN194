/**
 * Ryan Brown
 * rbrown69@unl.edu
 * 9/7/22
 *
 * This program finds the diferance between two locations based on longitued and latitude
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (int argc, char **argv) {
    double distance;
    //'r' or 'd' on front of Lat or Long stands for radians or degreees
    double dLatA, dLatB, rLatA, rLatB;
    double dLongA, dLongB, rLongA, rLongB;
    int radOfEarth = 6371;

    //get location information
    printf("Latitude of location 1: \n");
    scanf("%lf", &dLatA);
    printf("Longitude of location 1: \n");
    scanf("%lf", &dLongA);
    printf("Latitude of location 2: \n");
    scanf("%lf", &dLatB);
    printf("Longitude of location 2: \n");
    scanf("%lf", &dLongB);

    //convert longitude and latitude from degrees to radians
    rLatA = (dLatA/180)*M_PI;
    rLatB = (dLatB/180)*M_PI;
    rLongA = (dLongA/180)*M_PI;
    rLongB = (dLongB/180)*M_PI;

    //math
    distance = acos(sin(rLatA)*sin(rLatB)+cos(rLatA)*cos(rLatB)*cos(rLongB-rLongA))*radOfEarth;

    //output
    printf("Location Distance\n");
    printf("===========================\n");
    printf("Origin:      (%0.6f, %0.6f)\n", dLatA, dLongA);
    printf("Destination: (%0.6f, %0.6f)\n", dLatB, dLongB);
    printf("Air distance is %lf kms\n", distance);

    return 0;
}