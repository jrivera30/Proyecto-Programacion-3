#ifndef LISTA_H
#define LISTA_H
#include "curso.h"

class Lista : public Curso
{
    public:
        Lista();
        virtual ~Lista();
        void insertarInicio(Curso *);
        void insertarFinal(Curso *);
        Curso * buscarCurso(int codigo);
        void guardarArchivoAleatorio(char *);
        void leerArchivoAleatorio();

    protected:
        Curso * inicio;
        Curso * fin;

     private:
        char nombreArchivo;
        int ingresados;

};

#endif // LISTA_H
