/**
 * Ryan Brown
 * 11/28/22
 * 
 * program that recursivley calculates a binomial coeficient
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "binomial.h"

int main(int argc, char **argv){
    if(argc!=3){
        printf("Invalid input\n");
        exit(1);
    }

    int n=atoi(argv[1]);
    int k=atoi(argv[2]);



    printf("Binomial Coefecicent: (%d)(%d) = %lld\n",n,k,result);
    printf("Time of calculation: %d seconds",time);
    return 0;
}