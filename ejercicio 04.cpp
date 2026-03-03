#include <iostream>
#include <cmath>                    



int main() {
    double x, y, resultado;
    char operador;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> x;

    std::cout << "Ingrese el operador (+, -, *, /, %): ";
    std::cin >> operador;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> y;

    switch (operador) {

        case '+':
            resultado = x + y;
            std::cout << "Resultado: " << resultado << "\n";
            break;

        case '-':
            resultado = x - y;
            std::cout << "Resultado: " << resultado << "\n";
            break;

        case '*':
            resultado = x * y;
            std::cout << "Resultado: " << resultado << "\n";
            break;

        case '/':
            if (y == 0) {
                std::cout << "Error: No se puede dividir entre cero." << "\n";
            } else {
                resultado = x / y;
                std::cout << "Resultado: " << resultado << "\n";
            }
            break;

        case '%':
            if (y == 0) {
                std::cout << "Error: No se puede calcular modulo con cero." << "\n";
            } else {
                resultado = fmod(x, y);
                std::cout << "Resultado: " << resultado << "\n";
            }
            break;

        default:
            std::cout << "Operador no valido." << "\n";
    }

    return 0;
}
