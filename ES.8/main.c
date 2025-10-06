#include<stdio.h>

void modificaVariabile(int *variabile);

int main(){
    int var=30;
    int *ptr=&var;
    printf("%d", var);
    modificaVariabile(ptr);
    printf("%d", var);
    return 0;

}


void modificaVariabile(int *variabile){
    *variabile=42;
}
