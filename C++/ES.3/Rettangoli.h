#ifndef RETTANGOLI_H
#define RETTANGOLI_H

class Rettangolo{
    private:
        int base;
        int altezza;

    public:
    Rettangolo();
    
    int getArea();
    int getPerimetro();
    void setBase(int _Base);
    void setAltezza(int _Altezza);
    int getAltezza();
    int getBase();
};
#endif
