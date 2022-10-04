/*
*Ryan Brown
*rbrown69@unl.edu
*8/29/22
*
*converts a given US Dollar amount and converts half into GBP and JYP with a 10% service charge
*
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)  {

    double USD;
    double GBP;
    int JYP;
    double halfUSD;

    printf("Please input the total amount of US Dollars: ");
    scanf("%lf", &USD);
    printf("Fee \(10\%\): %lf\n", (USD*0.1));
    printf("You Get:\n");

    halfUSD = 0.9*USD/2;
    GBP = halfUSD*0.79;
    JYP = halfUSD*127.65;

    printf("%lf GBP\n", GBP);
    printf("%d JYP\n", JYP);

    return 0;
}