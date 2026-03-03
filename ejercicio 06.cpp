#include <iostream>


int main() {
    int a = 10;
    int b = 5;

    std::cout << "Valores iniciales:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";

    
    // variable temporal

    {
        int x = a;
        int y = b;

        std::cout << "Metodo 1: Variable Temporal" << "\n";
        std::cout << "Antes: x = " << x << ", y = " << y << "\n";

        int temp = x;
        std::cout << "temp = x -> temp = " << temp << "\n";

        x = y;
        std::cout << "x = y -> x = " << x << "\n";

        y = temp;
        std::cout << "y = temp -> y = " << y << "\n";

        std::cout << "Despues: x = " << x << ", y = " << y << "\n";
    }

    //  operaciones aritmeticas

    {
        int x = a;
        int y = b;

        std::cout << "Metodo 2: Operaciones Aritmeticas" << "\n";
        std::cout << "Antes: x = " << x << ", y = " << y << "\n";

        x += y;
        std::cout << "x += y -> x = " << x << "\n";

        y = x - y;
        std::cout << "y = x - y -> y = " << y << "\n";

        x -= y;
        std::cout << "x -= y -> x = " << x << "\n";

        std::cout << "Despues: x = " << x << ", y = " << y << "\n";
    }

    
    // Metodo con XOR
    
    {
        int x = a;
        int y = b;

        std::cout << "\n--- Metodo 3: XOR ---\n";
        std::cout << "Antes: x = " << x << ", y = " << y << "\n";

        x ^= y;
        std::cout << "x ^= y -> x = " << x << "\n";

        y ^= x;
        std::cout << "y ^= x -> y = " << y << "\n";

        x ^= y;
        std::cout << "x ^= y -> x = " << x << "\n";

        std::cout << "Despues: x = " << x << ", y = " << y << "\n";
    }

    return 0;
}
