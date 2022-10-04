/**
 * Ryan Brown
 * 9/22/22
 *
 * Program that estimates the total weight of corn
 * stored in silos
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv) {

    if(argc!=4) {
            printf("Error: invalid inputs\n");
            exit (0);
        }

    double radius = atof(argv[1]);
    double height = atof(argv[2]);
    double percentage = atof(argv[3]);

    if (radius<=0) {
        printf("Error: invalid inputs\n");
        exit (0);
    }
    if (height<=0) {
        printf("Error: invalid inputs\n");
        exit (0);
    }
    if ((percentage>1)||(percentage<0)) {
        printf("Error: invalid inputs\n");
        exit (0);
    }

    double volume = height*M_PI*(pow(radius,2))*percentage;
    double weight = volume*720.83;

    printf("Radius: %.3fm\n", radius);
    printf("Height: %.3fm\n", height);
    printf("Percentage: %.2f%%\n", percentage*100);
    printf("\n");
    printf("Total Volume:%11.3f m^2\n", volume);
    printf("Total Weight:%11.3f kg\n", weight);

    return 0;
}