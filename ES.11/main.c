#include<stdio.h>
#include<stdlib.h>

int main(){
    int var;
    printf("INserisci la grandezza del array:");
    scanf("%d", &var);
    float *ptr;
    ptr =(float*)malloc(var*sizeof(float));
    return 0;
}