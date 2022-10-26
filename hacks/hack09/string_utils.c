/**
 * Ryan Brown
 * 10/26/22
 * 
 * hack 9 has a variety of functions involving strings
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string_utils.h"

void replaceChar(char *s, char oldChar, char newChar){
    int length = strlen(s);
    char *copy[length];
    copy[length]='\0';
    for (int i=0;i<length;++i){
        copy[i]=s[i];
        if (s[i]==oldChar){
            copy[i]==newChar;
        }
    }
    return;
}

char * replaceCharCopy(const char *s, char oldChar, char newChar){

}

void removeChar(char *s, char c){

}

char * removeCharCopy(const char *s, char c){

}

char **lengthSplit(const char *s, int n){
    
}