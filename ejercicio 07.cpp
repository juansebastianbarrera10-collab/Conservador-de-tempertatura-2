#include <iostream>


int main() {
    int año;
    std::cout << "Ingrese un año: ";
    std::cin >> año;

    // Evaluaciones logicas
    bool divisible4   = (año % 4 == 0);
    bool divisible100 = (año % 100 == 0);
    bool divisible400 = (año % 400 == 0);

    std::cout << "Analisis paso a paso";

    std::cout << "¿Es divisible entre 4? ";
    std::cout << (divisible4 ? "Si" : "No") << "\n";

    std::cout << "¿Es divisible entre 100? ";
    std::cout << (divisible100 ? "Si" : "No") << "\n";

    std::cout << "¿Es divisible entre 400? ";
    std::cout << (divisible400 ? "Si" : "No") << "\n";

    // calendario gregoriano
    bool es_bisiesto = (divisible4 && !divisible100) || divisible400;

    std::cout << "Resultado Final" ;

    if (es_bisiesto) {
        std::cout << "El año " << año << " ES bisiesto." << "\n";
    } else {
        std::cout << "El año " << año << " NO es bisiesto." << "\n";
    }

    // Mostrar razonamiento final
    std::cout << "Regla aplicada: (divisible entre 4 Y NO divisible entre 100) "
         << "O divisible entre 400." << "\n";

    return 0;
}
