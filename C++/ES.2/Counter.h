#ifndef COUNTER_H
#define COUNTER_H


Class Counter{

    private:
        int value;

    public:
    Counter();
    ~Counter();
    int getValue();
    void increase(int n);

};
#endif