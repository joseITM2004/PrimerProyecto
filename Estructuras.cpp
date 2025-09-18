#include <iostream>
#include <Windows.h>
#include <string>
#include "funciones.h"
using namespace std;
enum options
{
    salir = 0,
    opt1,
    opt2,
    opt3,
    opt4,
    opt5
};

int main()
{
    bool run = true;
    album m[100];
    while (run)
    {
        switch (menu())
        {
        case opt1:
        {
            cout << "Escoja una posicion para agregar o sobreescribir album" << endl;
            int posc = 0;
            cin >> posc;
            cin.ignore();
            agregarAlbum( m, posc);
            system("pause");
            system("cls");
            break;
        }
        case opt2:
        {
            string nombres = " ";
            cout << "Ingrese el nombre del album:" << endl;
            cout << "nombre: ";
            getline(cin, nombres);
            //cin.ignore();
            buscarRegistroPorAlbum(m, nombres,100);
            system("pause");
            system("cls");
            break;
        }

        case opt3:
        {
            string nombre = " ";
            cout << "Ingrese el nombre del artista:" << endl;
            cout << "nombre: ";
            getline(cin, nombre);
            //cin.ignore();
            buscarRegistroPorArtista(m, nombre,100);
            system("pause");
            system("cls");
            break;
        }

        case opt4:
        {
            prom(m,100);
            system("pause");
            system("cls");
            break;
        }
        case opt5:
        {
            mostrarTodo(m,100);
            system("pause");
            system("cls");
            break;
        }
        case salir:
        {

            cout << "adios" << endl;
            Sleep(2000);
            run = false;
            break;
        }

        default:
        {
            cout << "opcion no valida intente otra vez" << endl;
            Sleep(10000);
            system("cls");
            continue;
            break;
        }
        }
    }
    run=true;
}