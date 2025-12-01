#ifndef SCARPE_H
#define SCARPE_H

class Scarpe{

    private:
        int dimensione;
        int stretch[6];
    public:
        Scarpe();
        void setdimensione(int _dimensione);
        int getdimensione();
        void ApriChiudi(int i);
        int getstretch(int i);
    }

#endif;