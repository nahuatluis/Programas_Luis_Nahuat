#include "procedimientos.h"

procedimientos::procedimientos()
{
    //ctor
}
void procedimientos::inter(int a2[],int b2[],int elem){

int pibo4[elem];
int conta = 0;
for (int i=0; i<elem;i++){

    for (int j=0;j<elem;j++ ){

       if (a2[i]==b2[j]){

     pibo4[conta]=b2[j];
      conta ++ ;
       }

    }

}


for (int i=0; i<conta;i++){

    cout << pibo4[i]<<",";
}
}
void procedimientos::rest(int a2[],int b2[],int elem){
    int cont;
int k=0;
int pibo[elem];
for (int i=0;i<elem;i++){

    cont =0;
   for (int j=0;j<elem;j++ ){

   if  (a2[i]==b2[j]){
    cont =cont +1;

   }

   }

  if (cont==0) {

  pibo[k]=a2[i];
  k=k+1;


  }
}



for (int i=0;i<k;i++){
    cout << pibo[i]<<",";

}}

void procedimientos::unio(int a2[],int b2[],int elem){
int cont;
int k=0;
int pibo[elem];
for (int i=0;i<elem;i++){

    cont =0;
   for (int j=0;j<elem;j++ ){

   if  (a2[i]==b2[j]){
    cont =cont +1;

   }

   }

  if (cont==0) {

  pibo[k]=a2[i];
  k=k+1;


  }
}
int c = k+elem;
for (int i=k;i<c;i++){

    pibo[i]=b2[i-k];


}
for (int i=0;i<c;i++){
    cout << pibo[i]<<",";
    }
}



