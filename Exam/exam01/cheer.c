/**
 * Ryan Brown
 * 9/22/22
 *
 * given inputs a,b,n the program outputs 1 --> n unless
 * if n is divisible by a it ouputs "Go Huskers!"
 * if n is divisible by b it outputs "Go Mavs!"
 * if n is divisible by both a and b it outputs "Go Nebraska!"
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {

    if (argc!=4){
        printf("invalid inputs\n");
        exit (0);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int n = atoi(argv[3]);

    if (n<1) {
        printf("invalid inputs\n");
        exit (0);
    }

    for (int i=1; i<=n; ++i) {

        if ((i%a==0)&&(i%b==0)) {
            printf("Go Nebraska!\n");
        }
        else if (i%a==0) {
            printf("Go Huskers!\n");
        }
        else if (i%b==0) {
            printf("Go Mavs\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}