#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"

class Kerrostalo
{
private:
    Katutaso *eka = new Katutaso;
    Kerros *toka = new Kerros;
    Kerros *kolmas = new Kerros;
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);
};

#endif // KERROSTALO_H
