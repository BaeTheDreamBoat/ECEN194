/**
 * Ryan Brown
 * 11/10/22
 * 
 * awards Huskers or Mavricks with points based on an
 * input file
 */
#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

int main(int argc, char **argv) {

  if(argc !=2) {
    fprintf(stderr, "Usage: %s fileName\n", argv[0]);
    exit(1);
  }

  FILE *f =fopen(argv[1],"r");

  int husker=0;
  int mavrick=0;
  int *team1=&husker;
  int *team2=&mavrick;
  int points=0;
  int lines=0;
  char buffer[10];

  fgets(buffer,10,f);
  lines=atoi(buffer)+1;
  for (int i=1;i<lines;++i){
    points=atoi(fgets(buffer,10,f));
    score(points,team1,team2);
  }
  

  printf("Huksers total:    %d\n",husker);
  printf("Mavricks totoal:  %d\n",mavrick);


  fclose(f);
  return 0;
}
