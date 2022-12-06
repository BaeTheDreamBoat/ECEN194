#include <stdio.h>

void selectionSort(int *arr, int n){
    for(int i=0;i<n-1;++i){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
    }
}
int main(int argc, char **argv){
    int n=8;
    int arr[]={4,8,2,9,4,1,3,10};
    int arr[]={4,8,2,9,4,1,3,10};

    printArray(arr,n);
    selectionSort(arr,8);

    return 0;
}