#include <iostream>
#include "Triangulos.h"
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    Triangulos A;
    double a,b,c,s,x,y,z;

    cout << "EJERCICIO 3 EXAMEN";

    cout << "\n\nlado A: ";
    cin >> a;
    A.SetladoA(a);
    cout << "lado B: ";
    cin >> b;
    A.SetladoB(b);
    cout << "lado C: ";
    cin >> c;
    A.SetladoC(c);
    cout << "\n\n";

    A.area();
    cout << "\n\n";
    A.area(a,b);
    cout << "\n\n";
    A.area(a,b,c);

    //s=(a+b+c)/2;
    A.Setlados(a);

    x=s-a;
    A.Setladox(x);
    y=s-b;
    A.Setladoy(y);
    z=s-c;
    A.Setladoz(z);

    return 0;
}
