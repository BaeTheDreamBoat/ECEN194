/**
 * Ryan Brown
 * rbrown69@unl.edu
 * 9/7/22
 *
 * The program computes weather the user is over, under, or right on the average daily usage of their plan.
 * It then informs the user how many GB are left and how many, on average, they can use per day for the
 * rest of the 30 day period
 */
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
    double gbPlan = atoi(argv[1]);
    int day = atoi(argv[2]);
    double gbUsed = atoi(argv[3]);
    double average, gbLeft, expectedAverage, newAverage;
    int daysLeft;

    //check for valid inputs
    if (argc != 4) {
        printf("invalid inputs\n");
        printf("expected inputs: GB_IN_MONTHLY_PLAN DAY_IN_30DAY_PERIOD GB_USED\n");
        return 0;
    }

    //math
    gbLeft = gbPlan-gbUsed;
    daysLeft = 30-day;
    expectedAverage = gbPlan/30;
    average = gbUsed/day;
    newAverage = gbLeft/daysLeft;


    //output
    printf("%d days left\n", daysLeft);
    printf("%0.2fGB remaining\n", gbLeft);
    printf("Average daily use: %0.2fGB/day\n", average);
    printf("Expected average daily use: %0.2fGB/day\n", expectedAverage);
    if(gbUsed>gbPlan){
        printf("you are out of data for the month.\n");
        return 0;
    }
    else if (average==expectedAverage) {
        printf("You are right on track.\n");
    }
    else if (average>expectedAverage) {
        printf("You are using to much data.\nTo stay below your data plan, do not exceede %0.2fGB/day.\n", newAverage);
    }
    else if (average<expectedAverage) {
        printf("You are a head of your data plan. You may uses up to %0.2fGB/day.\n", newAverage);
    }

    return 0;
}