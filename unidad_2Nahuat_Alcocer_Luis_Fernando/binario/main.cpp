#include <iostream>
#include "procedimento .h"
#include <stdlib.h>
using namespace std;

int main()
{
    procedimento p;
    int n;

    bool buc = false;
    do {
    cout << "introdusca el numero en base 10" << endl;
    cin >> n;
    cout <<"el numero de binario\n";
    p.proceso(n);//aqui llamo a la funcion
    cout << "\n";
    cout << "apesque 1 para salir\n";
    cout << "0 para continuar \n";
    cin >> buc;

    system("pause");
    system("cls");

    }while (!buc);
    return 0;
}
