#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    for(int i = -1; i <= 10; i++){
        printf("%d, %d\n", iterative(i), recursive(i));
    }
}