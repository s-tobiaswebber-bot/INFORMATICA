#include<stdio.h>

int main(){
    float x = 3.8;
    float *ptr = &x;
    printf("%f", *ptr);

    return 0;
}