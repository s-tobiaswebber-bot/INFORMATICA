#include"Scarpe.h"
#include<iostream>

Scarpe(){
    dimensione = 40;
    for(int i=0; i<6; i++)
        stretch[i] = 1;
}

void setdimensione(int _dimensione){
    dimensione = _dimensione;
}

int getdimensione(){
    return dimensione;
}

void ApriChiudi(int i){
    if(stretch[i]==1)
        stretch[i]=0;
    else
        stretch[i]=1;
}

int getstretch(int i){
    return stretch[i];
}


