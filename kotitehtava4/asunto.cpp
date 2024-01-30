#include "asunto.h"

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}

void Asunto::maarita(int asukas,int alue)
{
    asukasMaara=asukas;
    neliot=alue;
    cout<<"Asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}

double Asunto::laskeKulutus(double hinta)
{
    //cout<<"asunnon kulutus, kun hinta="<<hinta<<" on "<<hinta*asukasMaara*neliot<<endl;
    return hinta*asukasMaara*neliot;
}
