#include<stdio.h>

int calcolaLunghezzaStringa(const char *stringa);

    int main(){
        printf("La stringa ha una lunghezza pari a %d", calcolaLunghezzaStringa("Ciao mondo"));
    return 0;
}

    int calcolaLunghezzaStringa(const char *stringa){
        int len=0;
        while(*stringa!='\0'){
            len++;
            stringa++;

        }

        return len;
    }
