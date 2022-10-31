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
        *copy[i]=s[i];
        if (s[i]==oldChar){
            *copy[i]=newChar;
        }
    }
    return;
}

char * replaceCharCopy(const char *s, char oldChar, char newChar){
    int length = strlen(s);
    char *copy[length];
    copy[length]='\0';
    for (int i=0;i<length;++i){
        *copy[i]=s[i];
        if (s[i]==oldChar){
            *copy[i]=newChar;
        }
    }
    return *copy;   
}

void removeChar(char *s, char c){
    int oldLength=strlen(s);
    int newLength=oldLength;
    for (int i=0;i<oldLength;++i){
        if (s[i]==c);
        --newLength;
    }
    char *copy[newLength];
    for (int i=0;i<newLength;++i){
        if (s[i]!=c){
        *copy[i]=s[i];
        }
    }
    for (int i=0;i<oldLength;++i) {
        if(i<newLength) {
            s[i]= *copy[i];
        }
        else {
            s[i]='\0';
        }
    }
    return;
}

char * removeCharCopy(const char *s, char c){
    int oldLength=strlen(s);
    int newLength=oldLength;
    for (int i=0;i<oldLength;++i){
        if (s[i]==c);
        --newLength;
    }
    char *copy[newLength];
    for (int i=0;i<oldLength;++i){
        if(i<newLength){
            if (s[i]!=c){
            *copy[i]=s[i];
            }
        }    
    }
    return *copy;
}

char **lengthSplit(const char *s, int n){
    int LenghtOfArr=0;
    if ((strlen(s)%n)>0) {
        LenghtOfArr=(strlen(s)/n)+1;
    }
    else {
        LenghtOfArr=(strlen(s)/n);
    }
    char **arr[LenghtOfArr][n];
    for (int i=0;i<LenghtOfArr;++i){
        for(int j=0;j<n;++j){
            **arr[i][j]= s[(i*3)+j];
        }
    }
    return **arr;
}
