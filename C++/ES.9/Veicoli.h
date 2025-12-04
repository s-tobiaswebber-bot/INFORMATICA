#ifndef VEICOLI_H
#define VEICOLI_H

class Veicoli{
    private:
    string marca;
    string modello;
    int velocita;
    bool stato;

    public:
    string getmarca();
    string getmodello();
    int getaccelera();
    bool getstato(int d);
    void accelera();
    void frena();
    void accendi();
    void spegni();
    void velocita();

};
#endif
