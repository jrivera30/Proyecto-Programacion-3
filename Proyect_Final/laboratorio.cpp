#include "laboratorio.h"
#include <iostream>
#include <cstring>
#include <QDebug>

using namespace std;

Laboratorio::Laboratorio(int codigo, char * nombre, int matriculados, char * hora, int nolaboratorio, char * instructor):Curso(codigo, nombre, matriculados,hora)
{
    qDebug()<<"Constructor de Laboratorio";
    this->nolaboratorio(nolaboratorio);
    this->instructor(instructor);
}

Laboratorio::~Laboratorio()
{
    qDebug()<<"Destructor de Laboratorio";
    delete [] this->instructor;

}

void Laboratorio::setNoLaboratorio(int nolaboratorio)
{
    if (nolaboratorio >= 0)
        this->nolaboratorio = nolaboratorio;
    else
        this->nolaboratorio = 0;
}

void Laboratorio::setInstructor(const char * instructor)
{
    delete [] this->instructor;
    this->instructor = new char [strlen(instructor) + 1];
    strcpy(this->instructor,instructor);
}

int Laboratorio::getNoLaboratorio() const
{
    return this->nolaboratorio;
}

const char * Laboratorio::getNoLaboratorio() const
{
    return this->instructor;
}
