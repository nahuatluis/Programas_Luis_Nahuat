#include <iostream>
#include <string>
#include "Procedimientos.h"
#include <stdlib.h>

using namespace std;

int main()
{
    int num;
    int i;
    int opcion;
    bool bucle = true;
    Procedimientos p;
    cout << "\t\t\t\t Operaciones con conjuntos\n";
    cout <<"Introdusca el numero de elementos del conjunto A y B \n";
    cin >>num;
    int a[num];
    int b[num];

    //Realiza el llenado del conjunto A
    for (i=0;i<num;i++)
    {
        cout <<"Llene el elemento "<<i+1<< " del conjunto a\n";
        cin >>a[i];

    }

    //Realiza el llenado del conjunto B
    for (i=0;i<num;i++)
    {
        cout <<"Llene el elemento "<<i+1<< " del conjunto b \n";
        cin >>b[i];

    }


    do
    {
        cout << "\n"; // este imprime los elementos a
    cout << "Los conjuntos son: \n";
    cout << "Conjunto a es : ";
    for (i=0;i<num;i++)
    {
        cout <<a[i]<<",";
    }
    cout<<"\n";

    cout << "Conjunto B es :";
    for(int i=0;i<num;i++) // este imprime los elementos b
    {
        cout <<b[i]<<",";
    }


    cout << "\n";
    cout << "\n";
    cout << "Elija la opcion que desea: " << endl;
    cout << "1 la Interseccion" << endl;
    cout << "2 la Union de los 2 conjuntos" << endl;
    cout << "3 la resta de  A-B y la diferencia de B-A" << endl;
    cout << "4 para  verificar  si a es vacio" << endl;
    cout << "5 para verificar si b esta vacio" << endl;
    cout << "6 Para salir" << endl;
    cin >> opcion;


    switch (opcion)
    {
        case 1:
        cout << "la interseccion es: \n";
        p.interseccion(a,b,num);
        cout << "\n";
        system("pause");
        system("cls");
        break;

        case 2:
        cout << "la union es : \n";
        p.unio(a,b,num);
        cout << "\n";
        system("pause");
        system("cls");
        break;

        case 3:
        cout << "la diferencia de a - b es: \n";
        p.diferencia(a,b,num);//aqui le paso los 2 parametros para generar la diferencia de a y b

        cout << "\n";
        system("pause");
        system("cls");
        cout << "la diferencia de b - a es: \n";
         p.diferencia(b,a,num);//aqui cambio la posicion de los 2 parametros para generar la diferencia de b y a
        cout << "\n";
        system("pause");
        system("cls");
        break;

        case 4:
        p.conjuntovacioa(a,num);
        system("pause");
        system("cls");
        break;

        case 5:
        p.conjuntovaciob(b,num);
         system("pause");
        system("cls");
        break;
        case 6:
          bucle=false;
        break;

    }

    }while(bucle);

    return 0;
}
