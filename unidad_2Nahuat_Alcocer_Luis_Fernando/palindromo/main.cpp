#include <iostream>
#include <string.h>
#include "procesos palindromos.h"
using namespace std;

int main()
{
    string palabracompleta;
    int esp = 0;
    int med = 0;
    bool pal;

    cout << "introduzca alguna frase : ";
    getline(cin,palabracompleta);

        for (int i =0; i < palabracompleta.length(); i++)//averigua cuantas letras y cuantos espacios tiene la frase/palabra introducida
        {
            if (palabracompleta[i] == ' ')
            {
                esp++;
                med++;
            }
            else
            {
                med++;
            }
        }
    char fras[med-esp];//se genera un arreglo con medida exacta para almacenar la frase o palabra original, esto para facilitar la comparacion
    int fin = med -esp-1; //se saca el valor de la ultima casilla por donde se empezara la comparacion

    procesos_palindromos p;//instanciamiento de objeto
    p.exacto(fras, med, palabracompleta);//se pasan el arreglo exacto, las casillas originales y la palabra con espacios para llenar el arreglo vacio con puras letras, brincandose os espacios

    pal = p.decision(fras, 0, fin);//se invoca a la función "decision" que devuelve el valor de verdadero si la palabra es palindromo, o falso en caso contrario

    if (pal == true)//mensajes de "Verdadero o Falso" para informarle al usuario del resultado del analisis de la palabra ingresado
    {
        cout << "\n si es un palindromo \n";//Mensaje si "Verdadero"
    }
    else
    {
        cout << "\n no es un Palindromo\n";//Mensaje de "Falso"
    }




    return 0;
}
