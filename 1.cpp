#include <iostream>

using namespace std;

class KLASA
{
    int a,b;
    
    KLASA()//KONSTRUKTOR nazywa sie jak klasa
    {
        cout<<"tworze obiekt";
        a=0;
        b=0; //1
    }
};



int main()
{
    KLASA a;
    //a.a=1;  --> JAK NIE MA TO ZOSTANĄ DANE TAM LOSOWE ŚMIECI  
    //a.b=2;        ad.1 JAK UZYJEMY KONSTRUKTORA TO SIE USTAWI DOMYSLNIE WARTOSC KONSTRUKTORA
    
    
    return 0;
}
