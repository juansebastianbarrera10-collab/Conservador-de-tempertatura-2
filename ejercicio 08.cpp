#include <iostream>



int main() {
    double saldo = 1000.0;   
    double monto;
    int opcion;
    int transacciones = 0;   

    std::cout << "CAJERO AUTOMATICO";
    std::cout << "Saldo inicial: $" << saldo << "\n";

    std::cout << "\nMenu:" << "\n";
    std::cout << "1. Depositar" << "\n";
    std::cout << "2. Retirar" << "\n";
    std::cout << "3. Consultar saldo" << "\n";
    std::cout << "Seleccione una opcion: " << "\n";
    std::cin >> opcion;

    switch(opcion) {

        case 1:
            std::cout << "Ingrese el monto a depositar: ";
            std::cin >> monto;

            if (monto > 0) {
                saldo += monto;     
                transacciones++;    
                std::cout << "Deposito exitoso." << "\n";
            } else {
                std::cout << "Monto invalido." << "\n";
            }
            break;

        case 2:
            std::cout << "Ingrese el monto a retirar: ";
            std::cin >> monto;

            if (monto > 0 && monto <= saldo) {
                saldo -= monto;    
                transacciones++;    
                std::cout << "Retiro exitoso." << "\n";
            } else {
                std::cout << "Fondos insuficientes o monto invalido." << "\n";
            }
            break;

        case 3:
            std::cout << "Saldo actual: $" << saldo << "\n";
            transacciones++;
            break;

        default:
            std::cout << "Opcion invalida." << "\n";
    }

    std::cout << "Saldo final: $" << saldo << "\n";
    std::cout << "Numero de transacciones realizadas: " << transacciones << "\n";

    return 0;
}
