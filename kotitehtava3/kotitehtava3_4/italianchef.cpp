#include "italianchef.h"

ItalianChef::ItalianChef(string chefName, int vesimaara, int jauhomaara):Chef(chefName)
{
    name=chefName;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
    vesi=vesimaara;
    jauhot=jauhomaara;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int vesimaara, int jauhomaara)
{
    cout<<"Chef "<<getName()<<" makes pasta with special recipe"<<endl;

    cout<<"Chef "<<getName()<<" users jauhot = "<<jauhomaara<<endl;

    cout<<"Chef "<<getName()<<" users vesi = "<<vesimaara<<endl;
}
