#ifndef GESTORTRANSACCION_H
#define GESTORTRANSACCION_H

#include <vector>
#include "Transaccion.h"

class GestorTransaccion{
private:
    std::vector<Transaccion> transacciones;
public:
    GestorTransaccion();
    void agregarTransaccion(const Transaccion& t); //agregar una nueva Transaccion
    double calcularSaldo() const;   //metodo para calcularSaldo
    const std::vector<Transaccion>& getHistorial() const; //mostrar mostrar el historial getHistorial();
};

#endif