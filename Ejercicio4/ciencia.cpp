#include "ciencia.h"
#include <cmath>

namespace Ciencia {
    namespace Fisica {
        double calcularEnergia (double masa) {
            return masa * std::pow(velocidadLuz, 2);
        }
    }
}