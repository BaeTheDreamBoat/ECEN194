/**
 * Ryan Brown
 * 11/10/22
 * 
 * reversed the order of words in a string and then
 * reversed the order of letters in each word
 */
#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

int main(int argc, char **argv) {
  if(argc!=3){
    printf("Useage: inputfile name, ouputfile name\n");
    exit(1);
  }

  FILE *input=fopen(argv[1],"r");
  FILE *output=fopen(argv[2],"w");

  char buffer[1000];
  int numLines=0;
  numLines=numberOfLines(input)-1;

  for (int i=0;i<=numLines;++i){
    for (int j=0;j<numLines-i;++j){
      fgets(buffer,1000,input);
    }
    fgets(buffer,1000,input);
    fputs(revString(buffer),output);
    rewind(input);

  }

  fclose(input);
  fclose(output);
  return 0;
}
