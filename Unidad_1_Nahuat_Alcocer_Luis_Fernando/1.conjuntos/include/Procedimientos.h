#ifndef PROCEDIMIENTOS_H
#define PROCEDIMIENTOS_H
#include <iostream>
#include <string>

using namespace std;


class Procedimientos
{
    public:
        Procedimientos();
        void interseccion(int a2[],int b2[],int elem);
        void unio (int a2[],int b2[],int elem);
        void diferencia(int a2[],int b2[],int elem );
        void conjuntovacioa (int a2[],int elem );
        void conjuntovaciob (int b2[],int elem );

    protected:

    private:
};

#endif // PROCEDIMIENTOS_H
