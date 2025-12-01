#include"Scarpe.h"
#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    Scarpe paio[2];
    srand(time(NULL));

    for(int i=0; i<10; i++){
        paia[rand()%2].ApriChiudi(rand()%6);
    }

    for(int i = 0; i<2; i++){
        cout << "Paio numero " << i+1 << endl;
        for(int j=0; j<6; j++){
            if(paia[i].getstretch(j)==1)
                cout << "Stretch"
        }
    }

    return 0;
}