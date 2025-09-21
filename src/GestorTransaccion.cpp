#include "GestorTransaccion.h"
using namespace std;

GestorTransaccion::GestorTransaccion() = default;

void GestorTransaccion::agregarTransaccion(const Transaccion& t){ //agregar una nueva Transaccion
    transacciones.push_back(t);
}

double GestorTransaccion::calcularSaldo() const{   //nuevo metodo para calcularSaldo
    double saldo=0;
    for(const auto& t : transacciones){ saldo += t.getMonto(); }
    return saldo;
}

const std::vector<Transaccion>& GestorTransaccion::getHistorial() const{ //mostrar mostrar el historial getHistorial();
    return transacciones;
}