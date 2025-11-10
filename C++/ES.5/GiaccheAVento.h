#ifndef GIACCHE_A_VENTO
#define GIACCHE_A_VENTO

class GiaccheAVento{
  private:
    
    //tutto privato
    int percentualeChiusura;//APERTA 0,...,100 CHIUSA
    int taglia;//valore compreso tra 30 e 60  
    
  public:
    //tutto pubblico
    GiaccheAVento();//Costruttore
    void apri(int a);
    void chiudi(int a);
    void apriTotalmente();
    void chiudiTotalmente();
    void setTaglia(int _taglia);
    int getTaglia();
    int getPercentualeChiusura();
    
};

#endif