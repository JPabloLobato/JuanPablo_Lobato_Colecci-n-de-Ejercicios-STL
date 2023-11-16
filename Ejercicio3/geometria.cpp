#include "geometria.h"
#include <cmath>

namespace Geometria {
    Circulo::Circulo(double radio) : radio_(radio) {}
    double Circulo::calcularArea() {
        return 3.14159 * std::pow(radio_, 2);
    }
    double Circulo::calcularPerimetro() {
        return 2 * 3.14159 * radio_;
    }
}
