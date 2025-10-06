#include<stdio.h>

void raddoppiaElementiArray(int *array, int dimensione);

int main(){
    int array[10] = {1,1,1,1,1,1,1,1,1,1};
    int n=10, i;
    
    raddoppiaElementiArray(array, n);
    
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}


void raddoppiaElementiArray(int *array, int dimensione){
    int i;
    for(i=0;i<dimensione;i++){
        array[i] = array[i] * 2;
    }
    
}