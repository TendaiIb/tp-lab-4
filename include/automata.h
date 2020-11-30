#pragma once

#include <cstring>
#include <iostream>

using namespace std;

enum States
{
    Off,
    Wait,
    Accept,
    Check,
    Cook
};

class Automata
{
private:
    States state;
    double cash;
    
public:
    Automata()
    {
        cash = 0;
        state = Off;
    }

    void on();

    void off();

    void coin(int money);

    void choice(int number);

    void check(int number);

    void cancel();

    void cook();

    void finish();
}