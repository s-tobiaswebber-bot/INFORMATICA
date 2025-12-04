#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(){
    counter = 0;
    dimensione = 100;
    empty = true;
}

void Stack::push(int n){
    array[counter++] = n;
}
int Stack::pop(){
    return array[--counter];
}
int Stack::pop(){
    return array[counter-1];
}
bool Stack::isEmpty(){
    return counte == 0;
}
int Stack::size(){
    return size;
}
