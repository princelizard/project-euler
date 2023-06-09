#include<stdio.h>

int main() {
    int accumulator = 0, i;

    for(i = 0; i < 1000; i++) {

        if(i % 3 == 0 || i % 5 == 0) {
            accumulator += i;
            printf("%d\n", i);
        }
        
    }
    printf("%d\n", accumulator);
    return 0;

}