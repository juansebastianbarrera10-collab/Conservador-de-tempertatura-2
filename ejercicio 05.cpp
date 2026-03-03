#include <iostream>
#include <string>


int main() {
    double nota;
    std::string letra;
    std::string estado;

    std::cout << "Ingrese la nota del estudiante (0 - 100): ";
    std::cin >> nota;

    if (nota < 0 || nota > 100) {
        std::cout << "Error: Nota invalida." << "\n";
    }
    else {
        if (nota >= 90) {
            letra = "A";
        }
        else if (nota >= 80) {
            letra = "B";
        }
        else if (nota >= 70) {
            letra = "C";
        }
        else if (nota >= 60) {
            letra = "D";
        }
        else {
            letra = "F";
        }

        // Determinar estado
        if (nota >= 60) {
            estado = "Aprobado";
        }
        else {
            estado = "Reprobado";
        }

        std::cout << "Letra: " << letra << "\n";
        std::cout << "Estado: " << estado << "\n";
    }

    return 0;
}
