/**
 * Ryan Brown
 * 9/12/22
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop(+)
  int i=10;
  while(i<20){
    printf("%d ", i);
    i+=3;
  }
  printf("\n");

  for(int i=10; i<20; i+=3) {
    printf("%d ", i);
  }
  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop(+)
  int k = 3;
  while(k > -4) {
    printf("%d ", k);
    k--;
  }
  printf("\n");

  for (int k=3;k>-4;--k){
    printf("%d ", k);
  }
  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for (+)
  //   the last one; example: 1, 2, 3, 4, 5
  for(int a=0; a<=n; ++a){
    if (a!=n){
      printf("%d, ",a);
    }
    else{
      printf("%d", a);
    }
  }
  printf("\n");

  //4. Print squares of numbers 1 thru n separated by a comma (+)
  //   except for the last one; example: 1, 4, 9, 16, 25
    for(int b=0; b<=n; ++b){
    if (b!=n){
      printf("%d, ",b*b);
    }
    else{
      printf("%d", b*b);
    }
  }
  printf("\n");

  //5. Compute the summation of numbers 1 thru n and print (+)
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
    int sum=0;
    for (int c=1; c<=n; c++) {
      if (c!=n) {
        printf("%d + ", c);
        sum=sum+c;
      }
      else {
        printf("%d = ", c);
        sum=sum+c;
      }
    }
    printf("%d\n", sum);

  //6. Compute the summation of squares of numbers 1 thru n (+)
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
    int total=0;
    for (int d=1; d<=n; d++) {
      if (d!=n) {
        printf("%d^2 + ", d);
        total=total+d*d;
      }
      else {
        printf("%d^2 = ", d);
        total=total+d*d;
      }
    }
    printf("%d\n", total);

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6
    int sum2=0;
    printf("(n=%d): ",n);
    for(int e=2; e<=n; e+=2){
      if (e<n-2){
        printf("%d + ",e);
        sum2=sum2+e;
      }
      else {
        printf("%d = ",e);
        sum2=sum2+e;
      }
    }
    printf("%d\n",sum2);

  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Pring out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.
    for (int f=1; f<=n; ++f) {
      if ((f%7==0)&&(f%11==0)) {
        printf("FooBar");
      }
      else if (f%7==0) {
        printf("Foo ");
      }
      else if (f%11==0) {
        printf("Bar ");
      }
      else {
        printf("%d ", f);
      }
    }
    printf("\n");

  return 0;
}
