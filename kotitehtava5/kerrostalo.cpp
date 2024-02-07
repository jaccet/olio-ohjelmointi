#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Määritellään koko kerrostalon kaikki asunnot"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    return eka->laskeKulutus(hinta)+toka->laskeKulutus(hinta)+kolmas->laskeKulutus(hinta);
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    eka = nullptr;
    delete toka;
    toka = nullptr;
    delete kolmas;
    kolmas = nullptr;
}
