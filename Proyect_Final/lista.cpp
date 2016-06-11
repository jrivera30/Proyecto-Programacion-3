#include "lista.h"
#include <fstream>

Lista::Lista(char * nombreArchivo)
{
    inicio = 0;
    fin = 0;
}

Lista::~Lista()
{
    Curso * temp = inicio;
    while (inicio != 0)
    {
        inicio = temp->getSiguiente();
        delete temp;
        temp = inicio;
    }
}

void Lista::insertarInicio(Curso * nuevo)
{
    if(inicio == 0)
    {
        inicio = nuevo;
        fin = nuevo;
    }
    else {
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
    }
}

void Lista::insertarFinal(Curso * nuevo)
{
    if(inicio == 0)
    {
        inicio = nuevo;
        fin = nuevo;
    }
    else {
        fin->setSiguiente(nuevo);
        fin = nuevo;
    }
}

Curso * Lista::buscarCurso(int codigo)
{
    Curso * temp = inicio;
    while(temp != 0)
    {
       if(cuenta == temp->getCodigo())
       {
           return temp;
       }
       temp = temp->getSiguiente();
    }
    return 0;
}

void Lista::guardarArchivoAleatorio()
{
    ofstream archivoSalida(nombreArchivo, ios::out | ios::binary);

    for (int i = 0; i < ingresados; i++)
    {
        archivoSalida.write(reinterpret_cast<const char *> (Lista, sizeof(Lista)));
    }
}

void Lista::leerArchivoAleatorio()
{
    ifstream archivoEntrada(nombreArchivo, ios::in | ios::binary);
    if(!archivoEntrada)
    {
        return;
    }

    Lista lista;
    archivoEntrada.read(reinterpret_cast<char *>(&lista), sizeof(Lista));

    /*while(archivoEntrada && !archivoEntrada.eof())
    {
        this->
    }*/

}
