#include <iostream>
#include "procesos.h"
using namespace std;

int main()
{ procesos p;
    int c;
    int n;

    cout << "Introduzca la contidad con la que va a pagar" << endl;
    cin >>c;
    cout << "Introdusca el costo de lo que compro\n";
    cin >>n;
      c=c-n;
    cout << "SU CAMBIO ES :  "<<c<<"\n\n";
    cout << "SU CAMBIO EN MONEDAS ES: \n";
     p.com(c);
    return 0;
}
