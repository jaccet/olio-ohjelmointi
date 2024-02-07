#include "kerrostalo.h"


int main()
{
    int apHinta = 1;

    Kerrostalo *olioKerrostalo = new Kerrostalo;

    olioKerrostalo->laskeKulutus(apHinta);

    delete olioKerrostalo;
    olioKerrostalo = nullptr;
    return 0;
}
