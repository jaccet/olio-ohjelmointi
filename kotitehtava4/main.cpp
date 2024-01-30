#include "kerrostalo.h"

int main()
{
//    Asunto olioAsunto;
//    olioAsunto.maarita(2,100);
//    cout<<"asunnon kulutus, kun hinta=1 on "<<olioAsunto.laskeKulutus(1)<<endl;

    double alkuHinta = 1;
//    Katutaso olioKatutaso;

//    olioKatutaso.maaritaAsunnot();
//    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = "<<alkuHinta<<" on "<<olioKatutaso.laskeKulutus(alkuHinta)<<endl;

    Kerrostalo olioKerrostalo;
    cout<<"Kerrostalon kulutus, = "<<olioKerrostalo.laskeKulutus(alkuHinta)<<endl;
    return 0;
}
