#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
    if (argc !=2) {
        printf("include file name\n");
        exit(1);
    }

    FILE *f = fopen(argv[1],"r");
    int count =0;
    int *numbers = (int *)malloc(sizeof(int)* );

    char buffer[1000];
    char *line = fgets(buffer, 1000, f);
    while(line!=NULL){
        count++;
        line=fgets(buffer,1000,f);
    }



    for (int i=0; i<count; ++i){
        char *line(fgets(buffer, 1000, f);
        numbers[i]= atoi(buffer);

    }

    rewind(f);

    fclose(f);
    for (int i=0;i<count;++i){
        printf("numbers[%d] = %d\n", i , numbers[i]);
    }

    for(int i=0; i<count-1;++i){
        int x = numbers[i];
        int diff = 2020-x;
        for (int j=i+1;j<count;++j){
            if(numbers[j]==diff){
                printf("found two numbers: %d and %d, sum to %d, product = %d\n",x,numbers[j],x+numbers[j],x*numbers[j]);
            }
            int y=numbers[j];
            for (int k=j+1;k<count;k++){
                int z=numbers[k];
                if (x+y+z==202){
                    printf("found three numbers: %d and %d and %d, product = %d\n",x,y,z,x*y*z);
                }
            }

        }
    }

    return 0;
}