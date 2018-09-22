#include "Triangulos.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangulos::Triangulos()
{
    //ctor
}

double Triangulos::area(){
    float x;
    x=(pow(ladoA,2)* sqrt(3))/4;
    cout << "EL AREA DEL TRIANGULO EQUILATERO (VARIABLE A) ES: "<< x;

}

double Triangulos.area(double a, double b){
    float x,e,f,g;
    ladoA=a;
    ladoB=b;
    e=pow(ladoA,2);
    f=pow(ladoB,2)/4;


    x=(b*sqrt(e-f))/2;

    cout << "EL AREA DEL TRIANGULO ESCALENO (VARIABLE A Y B) ES: "<< x;

}

double Triangulos.area(double a, double b, double c){
    double x,e,f,g,h,i;
    ladoA=a;
    ladoB=b;
    ladoC=c;
    e=(a+b+c)/2;
    f=e-a;
    g=e-b;
    h=e-c;


    x=sqrt(e*f*g*h);

    cout << "EL AREA DEL TRIANGULO ISOSELES (VARIABLE A,B Y C) ES: "<< x;

}


