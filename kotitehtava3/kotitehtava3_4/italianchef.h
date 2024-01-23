#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
private:
    int vesi=50;
    int jauhot=60;
public:
    ItalianChef(string,int,int);
    string getName();
    void makePasta(int,int);
};

#endif // ITALIANCHEF_H
