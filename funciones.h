#include <iostream>
#include <Windows.h>
#include<string>
using namespace std;
struct album
{
    string NombreAlbum = "";
    string nombreArtista = "";
    int numeroDePistas = 0;
    int AñoLanza = 0;
};

void buscarRegistroPorAlbum(album p[], string name)
{
    int size = sizeof(p) / sizeof(p[0]);
    for (int i = 0; i < size; i++)
    {
        if (p[i].NombreAlbum ==name )
        {
            cout << "Nombre del album : " << p[i].NombreAlbum << endl;
            cout << "Nombre de artista: " << p[i].nombreArtista << endl;
            cout << "Numero de pistas: " << p[i].numeroDePistas << endl;
            cout << "Año de lanzamiento: " << p[i].AñoLanza << endl;
            cout << endl;
            break;
        }
    }
    cout << endl;
}

void llenarBaseDatos(album p[])
{
    int size = sizeof(p) / sizeof(p[0]);
    for (int i = 0; i < size; i++)
    {
        cout << "****Llenado de los datos del album: " << (i + 1) << "****" << endl;
        cout << "Ingrese el nombre del album" << endl;
        getline(cin,p[i].NombreAlbum);
        Sleep(2000);
        system("cls");
        cout << "Ingrese el nombre del artista" << endl;
        getline(cin,p[i].nombreArtista);
        Sleep(2000);
        system("cls");
        cout << "Ingrese el numero de pistas" << endl;
        cin>>p[i].numeroDePistas;
        Sleep(2000);
        system("cls");
        cout << "Ingrese el año de lanzamiento" << endl;
        cin>>p[i].AñoLanza;
        Sleep(2000);
        system("cls");

    }
}
void buscarRegistroPorArtista(album p[], string Artista)
{
    int size = sizeof(p) / sizeof(p[0]);
    for (int i = 0; i < size; i++)
    {
        if (p[i].nombreArtista == Artista)
        {
            cout<<"Esta en la poscion: "<<(i+1)<<endl;
            cout << "Nombre del album : " << p[i].NombreAlbum << endl;
            cout << "Nombre de artista: " << p[i].nombreArtista << endl;
            cout << "Numero de pistas: " << p[i].numeroDePistas << endl;
            cout << "Año de lanzamiento: " << p[i].AñoLanza << endl;
            cout << endl;
        }
    }
    cout << endl;
}
int menu()
{
    int opt = 0;
    cout << "Escoja una funcionalidad" << endl;
    cout << "opcion 1-- agregar sobreescribir disco" << endl;
    cout << "opcion 2-- Buscar album por nombre" << endl;
    cout << "opcion 3-- Buscar album por artista" << endl;
    cout << "opcion 4-- ver promedios" << endl;
    cout<<"opcion 5-- mostrar todo"<<endl;
    cout << "opcion 0-- salir del programa" << endl;
    cout<<"opt: ";
    cin >> opt;
    system("pause");
    system("cls");
    return opt;
}

void agregarAlbum(album p[],int pos){
    cout << "****Llenado de los datos del album: " << (pos) << "****" << endl;
    cout << "Ingrese el nombre del album" << endl;
    getline(cin,p[pos-1].NombreAlbum);
    Sleep(2000);
    system("cls");
    cout << "Ingrese el nombre del artista" << endl;
    getline(cin,p[pos-1].nombreArtista);
    Sleep(2000);
    system("cls");
    cout << "Ingrese el numero de pistas" << endl;
    cin>>p[pos-1].numeroDePistas;
    Sleep(2000);
    system("cls");
    cout << "Ingrese el año de lanzamiento" << endl;
    cin>>p[pos-1].AñoLanza;
    Sleep(2000);
    system("cls");
 

}

void prom(album p[]){
    double prome=0;
    int size = sizeof(p) / sizeof(p[0]);
    for (int i = 0; i < size; i++){
        prome+=p[i].numeroDePistas;
    }
    prome/=size;
    cout<<"El promedio de las pistas es de: "<<prome<<endl;
}
void mostrarTodo(album p[]){
    int size;
    size=sizeof(p)/sizeof(p[0]);
    for (int i = 0; i < size; i++)
    {
        cout << "Nombre del album : " << p[i].NombreAlbum << endl;
        cout << "Nombre de artista: " << p[i].nombreArtista << endl;
        cout << "Numero de pistas: " << p[i].numeroDePistas << endl;
        cout << "Año de lanzamiento: " << p[i].AñoLanza << endl;
        cout << endl;
        /* code */
    }
    


}