/**
 * Ryan Brown
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    double weight = atof(argv[1]);
    double height = atof(argv[2]);
    double duBois, haycock, boyd;

    if(argc !=3) {
        printf("Error: provide the weight and height\n");
        exit(1);
    }
    if (weight<=0) {
        printf("Error: weight must be posotive\n");
        exit(1);
    }
    if (height<=0) {
        printf("Error: height must be positive\n");
        exit(1);
    }

    duBois = sqrt((height*weight)/3600);
    haycock = 0.024265*pow(height,0.3964)*pow(weight,0.5378);
    boyd = 0.0333*pow(height,0.3)*pow(weight,(0.6751-0.00816474*log(weight)));

    printf("  Weight: %.2f kg\n", weight);
    printf("  Height: %.2f cm\n", height);
    printf("Formula   Bsa(m^2)");
    printf("--------------\n");
    printf("Du Bois   %f\n", duBois);
    printf("Haycock   %f\n", haycock);
    printf("Boyd      %f\n", boyd);

}