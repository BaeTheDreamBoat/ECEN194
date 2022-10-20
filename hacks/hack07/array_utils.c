//place your function definitions here
#include <stdlib.h>
#include "array_utils.h"

int contains(const int *arr, int size, int x){
    int check=0;
    for (int i=0; i<size; ++i){
        if (arr[i]==x){
            ++check;
        }    
    }
    if (check>0){
        return 1;
    }
    else{
        return 0;
    }

}

int containsWithin(const int *arr, int size, int x, int i, int j){
    int check=0;
    int big, small;
    if (i<j){
        small=i;
        big=j;
    }
    else if (j>i){
        small=j;
        big=i;
    }
    if (x<big&&x>small){
        for (int i=0; i<size; ++i){
        if (arr[i]){
            ++check;
        }    
        }
    }
    if (check>0){
        return 1;
    }
    else{
        return 0;
    }
}

int * paddedCopy(const int *arr, int oldSize, int newSize){
    int *copy = malloc(sizeof(int) * newSize);
    if (newSize<oldSize){
        for (int i=0; i<newSize; ++i){
            copy[i]=arr[i];
        }
    }
    else {
        for (int i=0; i<oldSize; ++i){
            copy[i]=arr[i];
        }
    }
    return copy;
}

void reverse(int *arr, int size){
    int *copy = malloc(sizeof(int) * size);
    int max = size-1;
    for (int i=0; i<size; ++i) {
        copy[max]=arr[i];
        --max;
    }
    for (int i=0; i<size; ++i){
        arr[i]=copy[i];
    }
    free (copy);
}

int * reverseCopy(const int *arr, int size){
    int *copy = malloc(sizeof(int) * size);
    int max = size-1;
    for (int i=0; i<size; ++i) {
        copy[max]=arr[i];
        --max;
    }
    return copy;
}