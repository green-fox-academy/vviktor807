//
// Created by Viktor on 2019. 04. 18..
//
#include <iostream>

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter(int number = 0);

    void setNumber(int number);

    void add();

    void add(int);

    void reset();

    int getNumber();

private:
    int _number;
    int _store;
};


#endif //COUNTER_COUNTER_H
