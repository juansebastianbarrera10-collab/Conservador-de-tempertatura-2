#include <iostream>
#include <cmath>



int main() {
    double a, b, c;

    std::cout << "Ingrese el lado 1: ";
    std::cin >> a;
    std::cout << "Ingrese el lado 2: ";
    std::cin >> b;
    std::cout << "Ingrese el lado 3: ";
    std::cin >> c;

    // todos los valores son positivos//
    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "Los lados deben ser positivos." <<"\n";
    }
    
    else if (a + b > c && a + c > b && b + c > a) {

        std::cout << "Es un triangulo valido." <<"\n";

        
        if (a == b && b == c) {
            std::cout << "Triangulo Equilatero." <<"\n";
        }
        else if (a == b || a == c || b == c) {
            std::cout << "Triangulo Isosceles." <<"\n";
        }
        else {
            std::cout << "Triangulo Escaleno." <<"\n";
        }

        
        
        double mayor = a;

        if (b > mayor) {
            mayor = b;
        }
        if (c > mayor) {
            mayor = c;
        }

        // teorema de pitagoras
        if (pow(mayor, 2) == pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(mayor, 2)) {
            std::cout << "Triangulo Rectangulo." << "\n";
        }
        else if (pow(mayor, 2) < pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(mayor, 2)) {
            std::cout << "Triangulo Acutangulo." <<"\n";
        }
        else {
            std::cout << "Triangulo Obtusangulo." <<"\n";
        }

    }
    else {
        std::cout << "No forman un triangulo valido." <<"\n" ;
    }

    return 0;
}
