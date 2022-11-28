#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int n = 1;
    while(n < 2){
        for(int i = -1; i <= 1000; i++){
            printf("%d, %d\n", iterative(i));
        }
    }
}
