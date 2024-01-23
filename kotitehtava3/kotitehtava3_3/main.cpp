#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef objectChef1("Jyrki");
    ItalianChef objectItalianChef("Mario");
    objectChef1.makeSalad();
    objectItalianChef.makePasta();
    objectChef1.makeSoup();


    return 0;
}
