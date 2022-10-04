#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
    int pass=0;
    int tests=9;
    int degrees;
    double radians;
    double originLatitude, originLongitude, destinationLatitude, destinationLongitude;
    double airDistance;
    double t, percentC;
    double timeDilation;
    double expectedDouble;
    //Test degreesToRadians #1
    degrees = 100;
    expectedDouble = 1.745329;
    radians = degreesToRadians(degrees);
    if (radians>=(expectedDouble-0.0001)&&radians<=(expectedDouble+0.0001)) {
        ++pass;
        printf("degreesToRadians passed\n");
    }
    else {
        printf("degreesToRadians Failed. Expected %lf Returned: %lf\n", expectedDouble, radians);
    }
    //Test degreesToRadians #2
    degrees = 150;
    expectedDouble = 2.61799;
    radians = degreesToRadians(degrees);
    if (radians>=(expectedDouble-0.0001)&&radians<=(expectedDouble+0.0001)) {
        ++pass;
        printf("degreesToRadians passed\n");
    }
    else {
        printf("degreesToRadians Failed. Expected %lf Returned: %lf\n", expectedDouble, radians);
    }
    //Test degreesToRadians #3
    degrees = 360;
    expectedDouble = 6.28319;
    radians = degreesToRadians(degrees);
    if (radians>=(expectedDouble-0.0001)&&radians<=(expectedDouble+0.0001)) {
        ++pass;
        printf("degreesToRadians passed\n");
    }
    else {
        printf("degreesToRadians Failed. Expected %lf Returned: %lf\n", expectedDouble, radians);
    }
    //Test getAirDistance #1
    originLatitude = -90;
    originLongitude = -180;
    destinationLatitude = 0;
    destinationLongitude = 0;
    expectedDouble = 10007.5434;
    airDistance = getAirDistance(originLatitude, originLongitude, destinationLatitude, destinationLongitude);
    if (airDistance>=(expectedDouble-0.0001)&&airDistance<=(expectedDouble+0.0001)) {
        ++pass;
        printf("getAirDistance passed\n");
    }
    else {
        printf("getAirDistance Failed. Expected: %.4f Returned: %.4f\n", expectedDouble, airDistance);
    }
    //Test getAirDistance #2
    originLatitude = -45;
    originLongitude = -1;
    destinationLatitude = 50;
    destinationLongitude = 33;
    expectedDouble = 11062.6930;
    airDistance = getAirDistance(originLatitude, originLongitude, destinationLatitude, destinationLongitude);
    if (airDistance>=(expectedDouble-0.0001)&&airDistance<=(expectedDouble+0.0001)) {
        ++pass;
        printf("getAirDistance passed\n");
    }
    else {
        printf("getAirDistance Failed. Expected: %.4f Returned: %.4f\n", expectedDouble, airDistance);
    }
    //Test getAirDistance #3
    originLatitude = 67;
    originLongitude = 19;
    destinationLatitude = -9;
    destinationLongitude = -22;
    expectedDouble = 9065.9302;
    airDistance = getAirDistance(originLatitude, originLongitude, destinationLatitude, destinationLongitude);
    if (airDistance>=(expectedDouble-0.0001)&&airDistance<=(expectedDouble+0.0001)) {
        ++pass;
        printf("getAirDistance passed\n");
    }
    else {
        printf("getAirDistance Failed. Expected: %.4f Returned: %.4f\n", expectedDouble, airDistance);
    }
    //Test lorentzTimeDilation #1
    t= 60;
    percentC= 0.2;
    expectedDouble= 61.2372;
    timeDilation = lorentzTimeDilation(t, percentC);
    if (timeDilation>=(expectedDouble-0.0001)&&timeDilation<=(expectedDouble+0.0001)){
        ++pass;
        printf("lorentzTimeDilation passed\n");
    }
    else {
        printf("lorentzTimeDilation Failed. Expected: %.4f Returned: %.4f\n", expectedDouble, timeDilation);
    }
    //Test lorentzTimeDilation #2
    t= 9999;
    percentC= 0.86;
    expectedDouble= 19594.5854;
    timeDilation = lorentzTimeDilation(t, percentC);
    if (timeDilation>=(expectedDouble-0.0001)&&timeDilation<=(expectedDouble+0.0001)){
        ++pass;
        printf("lorentzTimeDilation passed\n");
    }
    else {
        printf("lorentzTimeDilation Failed. Expected: %.4f Returned: %.4f\n", expectedDouble, timeDilation);
    }
    //Test lorentzTimeDilation #3
    t= 4628483;
    percentC= 0.02;
    expectedDouble= 4629408.9744;
    timeDilation = lorentzTimeDilation(t, percentC);
    if (timeDilation>=(expectedDouble-0.0001)&&timeDilation<=(expectedDouble+0.0001)){
        ++pass;
        printf("lorentzTimeDilation passed\n");
    }
    else {
        printf("lorentzTimeDilation Failed. Expected: %.4f Returned: %.4f\n", expectedDouble, timeDilation);
    }
    printf("%%%lf tests passed\n", 100*((double)pass/tests));

    return 0;
}
