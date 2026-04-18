#include <iostream>
#include <ctime>
using namespace std;

const int FILAS = 16;
const int COLUMNAS = 16;

struct Vehiculo {
    string placa;
    time_t horaEntrada;
};

Vehiculo parqueadero[FILAS][COLUMNAS];
bool ocupado[FILAS][COLUMNAS];

// 🔹 Mostrar mapa
void mostrarMapa() {
    cout << "\nMAPA DEL PARQUEADERO\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (i == 0 && j == 0)
                cout << "E "; // Entrada
            else if (i == FILAS-1 && j == COLUMNAS-1)
                cout << "S "; // Salida
            else if (ocupado[i][j])
                cout << "X ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}

// 🔹 Registrar ingreso (usa puntero)
void ingresarVehiculo(bool *ok) {
    string placa;
    cout << "Ingrese placa: ";
    cin >> placa;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (!ocupado[i][j] && !(i == 0 && j == 0) && !(i == FILAS-1 && j == COLUMNAS-1)) {
                parqueadero[i][j].placa = placa;
                parqueadero[i][j].horaEntrada = time(0);
                ocupado[i][j] = true;
                cout << "Vehiculo ingresado en posicion [" << i << "," << j << "]\n";
                *ok = true;
                return;
            }
        }
    }
    cout << "No hay espacio disponible\n";
    *ok = false;
}

// 🔹 Calcular pago
double calcularPago(time_t entrada) {
    time_t salida = time(0);
    double segundos = difftime(salida, entrada);
    double minutos = segundos / 60;

    return minutos * 100; // tarifa: 100 por minuto
}

// 🔹 Registrar salida
void retirarVehiculo() {
    string placa;
    cout << "Ingrese placa a retirar: ";
    cin >> placa;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (ocupado[i][j] && parqueadero[i][j].placa == placa) {
                double pago = calcularPago(parqueadero[i][j].horaEntrada);
                cout << "Total a pagar: $" << pago << endl;

                ocupado[i][j] = false;
                cout << "Vehiculo retirado\n";
                return;
            }
        }
    }
    cout << "Vehiculo no encontrado\n";
}

// 🔹 Inicializar parqueadero
void inicializar() {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            ocupado[i][j] = false;
}

// 🔹 Menú
int main() {
    inicializar();
    int opcion;
    bool ok;

    do {
        cout << "\n1. Mostrar mapa\n2. Ingresar vehiculo\n3. Retirar vehiculo\n4. Salir\nOpcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarMapa();
                break;
            case 2:
                ingresarVehiculo(&ok); // uso de puntero
                break;
            case 3:
                retirarVehiculo();
                break;
        }

    } while (opcion != 4);

    return 0;
}
