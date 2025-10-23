#include "Counter.h"

Counter::Counter(){
    cout << "istanza dell'oggetto creata!\n";
    value=0;
}
Counter::~Counter(){
    cout << "oggetto distrutto! \n"
}

int Counter::getvalue(){
    return value;
}

Counter::void increase(int n){
    value+=n;
}