#include <iostream>
#include "procedimientos.h"
using namespace std;

int main()
{
int elem;
int i;
    cout << "bienvenido al programa" << endl;
    cout <<"INTRODUSCA EL NUMERO DE ELEMENTOS\n";
    cin >>elem;

    int a[elem];
    int b[elem];


   for (i=0;i<elem;i++){

    cout <<"Llene el elemento "<<i+1<< " del conjunto a \n";
    cin >>a[i];

   }
   for (i=0;i<elem;i++){

    cout <<"Llene el elemento "<<i+1<< " del conjunto b \n";
    cin >>b[i];

   }

    cout << "los conjuntos son\n";

    cout << "el conjunto a es :";
    for(int i=0;i<elem;i++){

    cout <<a[i]<<",";

    }
    cout<<"\n";

    cout << "el conjunto b es :";
     for(int i=0;i<elem;i++){

    cout <<b[i]<<",";

    }
    cout << "\n";

procedimientos p;


cout << "la interseccion es: \n";

p.inter(a,b,elem);
cout << "\n";

cout << "la union es : \n";
p.unio(a,b,elem);
cout << "\n";

cout << "la diferencia de a -b es: \n";
p.rest(a,b,elem);





    return 0;
}
