#ifndef CHEF_H
#define CHEF_H

#include <iostream>

using namespace std;

class Chef
{
protected:
    string name;
public:
    Chef(string chefName);
    void makeSalad();
    void makeSoup();
    ~Chef();
};

#endif // CHEF_H
