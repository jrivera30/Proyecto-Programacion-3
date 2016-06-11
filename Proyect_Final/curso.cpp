#include "curso.h"
#include <iostream>
#include <cstring>
#include <QDebug>

using namespace std;

Curso::Curso(int codigo, char * nombre, int matriculados, char * hora)
{
    qDebug()<<"Constructor de Curso";
    this->setCodigo(codigo);
    this->setNombre(nombre);
    this->setMatriculados(matriculados);
    this->setHora(hora);

}

Curso::~Curso()
{
    qDebug()<<"Destructor de Curso";
    delete [] this->nombre;
    delete [] this->hora;
}

void Curso::setCodigo(int codigo)
{
    if (codigo >= 0)
        this->codigo = codigo;
    else
        this->codigo = 0;
}

void Curso::setNombre(const char * nombre)
{
    delete [] this->nombre;
    this->nombre = new char [strlen(nombre) + 1];
    strcpy(this->nombre,nombre);
}

void Curso::setMatriculados(int matriculados)
{
    if(matriculados >= 0)
        this->matriculados = matriculados;
    else
        this->matriculados = 0;
}

void Curso::setHora(const char * hora)
{
    delete [] this->hora;
    this->hora = new char [strlen(hora) + 1];
    strcpy(this->hora,hora);
}

int Curso::getCodigo() const
{
    return this->codigo;
}
const char * Curso::getNombre() const
{
    return this->nombre;
}
int Curso::getMatriculados() const
{
    return this->matriculados;
}
const char * Curso::getHoras() const
{
    return this->hora;
}

void Curso::setAnterior(Curso * nuevo)
{
    this->anterior = nuevo;
}

void Curso::setSiguiente(Curso * nuevo)
{
    this->siguiente = nuevo;
}

Curso * Curso::getAnterior()
{
    return anterior;
}

Curso * Curso::getSiguiente()
{
    return siguiente;
}

Curso::getCupo() const
{

}
