#include "clase.h"
#include <iostream>
#include <cstring>
#include <QDebug>

using namespace std;

Clase::Clase(int codigo, char * nombre, int matriculados, char * hora, int aula, char * catedratico, char * dias): Curso(codigo, nombre, matriculados,hora)
{
    qDebug()<<"Constructor de Clase";
    this->setAula(aula);
    this->setCatedratico(catedratico);
    this->setDias(dias);
}

Clase::~Clase()
{
    qDebug()<<"Destructor de Clase";
    delete [] this->catedratico;
    delete [] this->dias;
}

void Clase::setAula(int aula)
{
    if (aula >= 0)
        this->aula = aula;
    else
        this->aula = 0;
}

void Clase::setCatedratico(const char * catedratico)
{
    delete [] this->catedratico;
    this->catedratico = new char [strlen(catedratico) + 1];
    strcpy(this->catedratico,catedratico);
}

void Clase::getDias(const char * dias)
{
    delete [] this->dias;
    this->dias = new char [strlen(dias) + 1];
    strcpy(this->dias,dias);
}

int Clase::setAula() const
{
    return this->aula;
}

const char * Clase::setCatedratico() const
{
    return this->catedratico;
}

const char * Clase::setDias() const
{
    return this->dias;
}



