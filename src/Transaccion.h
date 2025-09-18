#ifndef TRANSACCION_H
#define TRANSACCION_H

#include<string>

class Transaccion{
    private:
        double monto; //Positivo=ingreso  Negativo=gasto
        std::string categoria;
    public:
        Transaccion(double monto_, const std::string& Categoria_="Desconocida");
        double getMonto() const { return monto; }
        const std::string& getCategoria() const { return categoria; }
};

#endif