#include <iostream>
#include "geometria.h"

int main() {
    double radioCirculo = 4.0;
    Geometria::Circulo miCirculo(radioCirculo);
    std::cout << "Área del círculo: " << miCirculo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << miCirculo.calcularPerimetro() << std::endl;
    return 0;
}


