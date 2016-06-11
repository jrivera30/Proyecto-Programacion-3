#ifndef CURSO_H
#define CURSO_H


class Curso
{
    public:
        Curso(int, char *, int, char *);
        virtual ~Curso();
        void setCodigo(int);
        void setNombre(const char *);
        void setMatriculados(int);
        void setHora(const char *);
        int getCodigo() const;
        const char * getNombre() const;
        int getMatriculados() const;
        const char * getHoras() const;
        void setAnterior(Curso *);
        void setSiguiente(Curso *);
        Curso * getAnterior();
        Curso * getSiguiente();
        virtual void getCupo() const = 0;

    protected:


    private:
        Curso * anterior;
        Curso * siguiente;
        int codigo;
        char * nombre;
        int matriculados;
        char * hora;

};

#endif // CURSO_H
