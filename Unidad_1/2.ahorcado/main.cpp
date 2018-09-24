#include "juego.h"
#include <iostream>
#include <string>



using namespace std;

int main()
{
    char pal1 [] ="doom";
    char pal2 [] ="quake";
    char pal3 [] ="diblo";
    char pal4 [] ="mario";
    char pal5 [] ="pez";
    char pal6 [] ="perro";
    char pal7 [] ="paloma";
    char pal8 [] ="gato";
    char pal9 [] ="kael";
    char pal10[]="raynor";
    int med;
    bool cont = true;
    int emp;


    juego jugador;

    cout << "Bienvenido al juego de ahorcado\n";
    cout << "Presiona 1 para empezar y 0 para salir\n";
    cin >> emp;

    if (emp == 1)
    {
        cout << "\t\t\t\t!!!!LEE ESTO POR FAVORRR!!!!!!\n";
       cout << "\t\t\t\t     !!!!INTRUCCIONES!!!!!!\n";
        cout << "-En este juego usted intentara adivinar una palabra al azar introduciendo una sola letra a la vez\n\n";
        cout << "-Si falla al adivinar una letra se le restara una vida, el juego inicia con 5 vidas\n\n\n";

        cout <<"ya empesamos:v";
    do
    {

    switch (jugador.numer())
    {
    case 1:
        {
            cout << "\n\n juego que trata sobre demonios en el espacio \n\n";
            med = 4;
            jugador.proc(pal1,med);
            break;
        }
    case 2:
        {cout << "\n\n significa temblor en ingles \n\n";
            med = 5;
            jugador.proc(pal2, med);
            break;
        }
    case 3:
        {cout << "\n\n Enemigo de dios \n\n";
            med = 5;
            jugador.proc(pal3, med);
            break;
        }
    case 4:
        {cout << "\n\n cara de nintendo \n\n";
            med = 5;
            jugador.proc(pal4, med);
            break;
        }
    case 5:
        {
            cout<<"\n\n animal comun del mar \n\n";
            med = 3;
            jugador.proc(pal5, med);
            break;
        }
    case 6:
        {
            cout <<"\n\n mejor amigo del hombre \n\n";
            med = 5;
            jugador.proc(pal6, med);
            break;
        }
    case 7:
        {
            cout <<"\n\n ratas con alas\n\n";
            med = 6;
            jugador.proc(pal7, med);
            break;
        }
    case 8:
        {
            cout <<"\n\n tiene nueve vidas \n\n";
            med = 4;
            jugador.proc(pal8, med);
            break;
        }
    case 9:
        {
            cout << "\n\n elfo de warcraft el principe de ellos \n\n";
            med = 4;
            jugador.proc(pal9, med);
            break;
        }
    case 10:
        {
            cout << "\n\n personaje importante de starcraft enemigo de menst \n\n";
            med= 6;
            jugador.proc(pal10, med);
            break;
        }
    }

    cout << "Quieres volver a jugar? 1 para si, 0 para no:";
    cin >> cont;

    }while(cont);
    }

    return 0;
}
