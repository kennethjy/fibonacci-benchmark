#include <stdio.h>
#include <time.h>

#include "mylib/mylib.h"

int main(void){

    float startTime = (float)clock()/CLOCKS_PER_SEC;

    for(int i = -1; i <= 40; i++){
        printf("%d) %lld\n", i, recursive(i));
    }

    float endTime  = (float)clock()/CLOCKS_PER_SEC;
    printf("Time elapsed: %f s\n",endTime - startTime);
}