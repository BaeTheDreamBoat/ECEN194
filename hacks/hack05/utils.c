#include <stdlib.h>
#include <math.h>
#include "utils.h"

double degreesToRadians(double degree) {
    return (degree*M_PI/180);
}

double getAirDistance(double originLatitude,
                      double originLongitude,
                      double destinationLatitude,
                      double destinationLongitude) {
    originLatitude = degreesToRadians(originLatitude);
    originLongitude = degreesToRadians(originLongitude);
    destinationLatitude = degreesToRadians(destinationLatitude);
    destinationLongitude = degreesToRadians(destinationLongitude);
    return (acos(sin(originLatitude)*sin(destinationLatitude)+
            cos(originLatitude)*cos(destinationLatitude)*cos(destinationLongitude-originLongitude))*6371);
}

double lorentzTimeDilation(double t, double percentC) {
    return (t/sqrt(1-(pow(percentC,2))));
}