#include <iostream>
#include "Veicoli.h"
   
   using namespace std;
   
   Veicoli::Veicolo(){
      velocita = 0;
      stato_motore = false;
      marca = Fiat;
   }
   string Veicoli::getmarca(){
      return marca;
   }
   string Veicoli::getmodello(){
      return modello;
   }
   int Veicoli::getaccelera(){
      
   }
   bool Veicoli::getstato(int d){
      
   }
   void Veicoli::accelera(){
      if(velocita+d<= 200 && velocita + d >= -30){
         velocita += d;
      }
   }
   void Veicoli::frena(){
      velocita = 0;
   }
   void Veicoli::accendi(){
      stato = true;
   }
   void Veicoli::spegni(){
      stato = false;
   }
   void Veicoli::velocita(){
      return velocita;
   }
   
