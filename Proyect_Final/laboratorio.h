#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "laboratorio.h"




class Laboratorio : public Curso
{
    public:
    Laboratorio(int, char *, int, char *, int, char *);
    virtual ~Laboratorio();
    void setNoLaboratorio (int);
    void setInstructor (const char *);
    int getNoLaboratorio() const;
    const char * getInstructor() const;

    protected:

    private:
    int nolaboratorio;
    char * instructor;

};

#endif // LABORATORIO_H
