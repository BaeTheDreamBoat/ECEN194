#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "utils.h"

char * deepStringCopy(const char *str) {
  char *copy = (char *) malloc(sizeof(char) * (strlen(str)+1));
  strcpy(copy, str);
  return copy;
}

void score(int points, int *team1, int *team2){
    if (points%3==0&&points%5==0){
        *team1+=points;
        *team2+=points;
    }
    else if (points%3==0){
      *team1+=points;
    }
    else if (points%5==0){
      *team2+=points;
    }
}

char *revString(char *string){
  int length=strlen(string)-1;
  char *copy=(char *)malloc(sizeof(char)*length);
  for(int i=0;i<=length;++i){
    copy[length-i]=string[i];
  }
  copy[length+1]='\0';
  return copy;
}

int numberOfLines(FILE *input){
  int numLines=0;
  char buffer[1000];
  while (feof(input)==0){
    fgets(buffer,1000,input);
    ++numLines;
  }
  rewind(input);
  return numLines;
}