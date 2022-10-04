/**
 * Ryan Brown
 * 9/19/22
 *
 * program that produces an amortization table for a 401(k) account
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

    if(argc != 6) {
    printf("Error: invalid inputs\n");
    exit(0);
  }

  double initBalance = atof(argv[1]);
  double monthlyCont = atof(argv[2]);
  double rateOfReturn = atof(argv[3]);
  double rateOfInflation = atof(argv[4]);
  int yrsTillRetirement = atoi(argv[5]);
  double intrest;
  double newBalance;
  double totalIntrest;

  if (monthlyCont>18500) {
    printf("Monthly Contribution exceeds limit of $18500");
    exit(0);
  }
  else if((rateOfReturn<0)||(rateOfReturn>1)) {
    printf("rate of return must be between 0 and 1");
    exit(0);
  }
  else if((rateOfInflation<0)||(rateOfInflation>1)) {
    printf("rate of inflation must be between 0 and 1");
    exit(0);
  }

  printf("Month    Interest     Balance\n");
    for (int i=0; i<yrsTillRetirement; ++i) {
        intrest = (initBalance+monthlyCont*i)*((((1+rateOfReturn)/(1+rateOfInflation))-1)/12);
        newBalance = initBalance+monthlyCont*i+intrest;
        printf("%5.0f $%7.2f $%8.2f\n", (double)i+1, intrest, newBalance);
        totalIntrest = totalIntrest+intrest;
    }
    printf("Total Intrest Earned: $%7.2f\n", totalIntrest);
    printf("Total Nest Egg: $%7.2f\n", newBalance);

}