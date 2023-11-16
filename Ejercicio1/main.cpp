#include <iostream>

namespace Matematicas {
    double suma(double a, double b) {
        return a + b;
    }

    double resta(double a, double b) {
        return a - b;
    }
}
int main () {
    double numero1 = 10.5;
    double numero2 = 5.5;
    double resultadoSuma = Matematicas::suma(numero1, numero2);
    double resultadoResta = Matematicas::resta(numero1, numero2);
    std::cout << "La suma de " << numero1 << " y " << numero2 << " es " << resultadoSuma << std::endl;
    std::cout << "La resta de " << numero1 << " y " << numero2 << " es " << resultadoResta << std::endl;
    return 0;
}