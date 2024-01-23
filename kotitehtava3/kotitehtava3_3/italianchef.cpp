#include "italianchef.h"

ItalianChef::ItalianChef(string chefName):Chef(chefName)
{
    name=chefName;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<getName()<<" makes pasta"<<endl;
}
