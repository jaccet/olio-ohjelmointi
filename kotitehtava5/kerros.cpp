#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

double Kerros::laskeKulutus(double hinta)
{
    return as1->laskeKulutus(hinta)+as2->laskeKulutus(hinta)+as3->laskeKulutus(hinta)+as4->laskeKulutus(hinta);
}

Kerros::~Kerros()
{
    delete as1;
    as1 = nullptr;
    delete as2;
    as2 = nullptr;
    delete as3;
    as3 = nullptr;
    delete as4;
    as4 = nullptr;
}
