#include <iostream>
#include "ciencia.h"

int main () {
    double masa = 1.0;
    std::cout << "Velocidad de la luz: " << Ciencia::Fisica::velocidadLuz << "m/s" << std::endl;
    double energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "Energia correspondiente a una masa de " << masa << "kg: " << energia << "J" << std::endl;
    return 0;
}
