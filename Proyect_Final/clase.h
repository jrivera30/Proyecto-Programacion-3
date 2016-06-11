#ifndef CLASE_H
#define CLASE_H
#include "curso.h"


class Clase : public Curso
{
    public:
    Clase(int, char *, int, char *, int, char *, char *);
    virtual ~Clase();
    void setAula(int);
    void setCatedratico (const char *);
    void setDias (const char *);
    int getAula() const;
    const char * getCatedratico() const;
    const char * getDias() const;

    protected:


    private:
    int aula;
    char * catedratico;
    char * dias;
};

#endif // CLASE_H
