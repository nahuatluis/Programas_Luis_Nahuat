#ifndef PROCESOS_H
#define PROCESOS_H
#include <iostream>
using namespace std;

class procesos
{
    public:
        procesos();
    void com(int n){
if (n>=1000){//  aqui le pongo un parametro de mil para adelante

   c = n/1000;
   cout << c << "   billete(s)  1000\n\n" ;
   com(n%1000);//le paso como parametro un residuo de mil


}else {




if (n>=500){//le paso como parametro mayor o igual a 500
    c =n/500;
    cout << c << "  billete(s) de 500 \n\n";
    com (n%500);//le saco el residuo de 500

}else{
   if  (n>=200){
          c=n/200;


          cout << c<<"  billete(s)de 200 \n\n";
          com (n%200);
    }else {
 if (n>=100){

    c=n/100;
    cout << c << " billete(s) de 100 \n\n";
    com (n%100);
 }else {

  if (n>=50){
    c = n/50;
    cout << c << "  billete(s) de 50 \n\n";
    com (n%50);

  }else {

     if (n>=20){

      c = n/20;
      cout << c << "  billete(s) de 20 \n";
      com (n%20);
     }else {

         if (n>=10){
            c = n/10;
       cout << c << "  moneda(s) de 10 \n";
            com(n%10);
        }else {

          if (n>=5){
            c = n/5;
             cout << c << "  moneda(s) de 5 \n";
              com(n%5);
        }else {

          if (n>=2){
            c=n/2;
            cout << c<< "  moneda(s)  de 2 \n";
           com(n%2);
          }else {
              if (n==1)
          cout << n<< "  moneda(s)  de 1 \n";
            }
         }
       }
     }
   }
}
}
}
}
};

    protected:

    private:
        int c;
};

#endif // PROCESOS_H
