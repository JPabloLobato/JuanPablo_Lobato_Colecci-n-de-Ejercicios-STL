#pragma once

namespace Geometria {
    class Circulo {
    public:
        Circulo(double radio);
        double calcularArea();
        double calcularPerimetro();
    private:
        double radio_;
    };
}

