#include "procedimento .h"

procedimento ::procedimento ()
{
    //ctor
}
void procedimento::proceso (int n) {

if (n>=1 ){
  proceso(n/2);//aqui aplico la recursiada para dividir entre 2

    cout << n%2;//aqui imprimo el residuo numero
   }
}
