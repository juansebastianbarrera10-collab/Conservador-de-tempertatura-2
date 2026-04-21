#include <iostream>
#include <ctime>

const int FILAS = 16;
const int COLUMNAS = 16;


struct Vehiculo {
    std:: string placa;
    std:: time_t horaEntrada;
    std:: time_t horaSalida;
};
void ingresarvehiculo(Vehiculo*vehiculo, bool*estado, std::string placa){
    vehiculo->placa = placa;
    vehiculo->horaEntrada = std::time(0);
    *estado = true;
} 
    void retirarvehiculo(Vehiculo*vehiculo, bool*estado){
    vehiculo->horaSalida = std::time(0);
    *estado = false;
   
}
   double calcularcosto(Vehiculo*vehiculo){
    double costo = 500;
    double horas = difftime(vehiculo->horaSalida, vehiculo->horaEntrada) / 3600.0;
    if (horas <= 1) {
        costo = 500; 
    } 
    else {
        costo = 500 + (horas - 1) * 200; 
    }
    return costo;
}

Vehiculo parqueadero[FILAS][COLUMNAS];
bool ocupado[FILAS][COLUMNAS];

void mostrarMapa(bool ocupado[FILAS][COLUMNAS]) {


for (int i = 0; i < FILAS; i++) {
     for (int k = 0; k < COLUMNAS; k++) {
        std::cout << "------------";
    }
    std::cout << "\n";

        for (int o = 0; o < COLUMNAS; o++) {
             std::cout << "|";
            if (i==0 && o==1)
            std::cout << "ENTRADA";
            else if (i==15 && o==13)
            std::cout << "SALIDA";
            else if (i==0 || i==15 || o==0 || o==15)
            std::cout << "pared";
            else if ( o==1 || i==0)
            std::cout << "via";
            else if (o==0 || i==14)
            std::cout << "via";
            else if (o==0 || i==7)
            std::cout << "via";
            else if (o==2 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else if (o==3 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
           else if (o==4 || i==0)
            std::cout << "via";
            else if (o==5 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else if (o==6 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else if (o==7 || i==0)
            std::cout << "via";
            else if (o==8 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else if (o==9 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else if (o==10 || i==0)
            std::cout << "via";
            else if (o==11 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else if (o==12 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else if (o==13 || i==0)
            std::cout << "via";
            else if (o==14 || i==0)
            std::cout << (ocupado[i][o] ? " OCUPADO " : "  LIBRE  ");
            else
            std::cout << "         "; 

        }
        std::cout << "|\n";
        
    }
    for (int k = 0; k < COLUMNAS; k++) {
    std::cout << "------------";
    }
    std::cout << "\n";
}
void opcion1(Vehiculo parqueadero[FILAS][COLUMNAS], bool ocupado[FILAS][COLUMNAS]){
    int fila, columna;
    std:: string placa;
    std::cout<<"ingrese la fila: "<<std::endl;
    std::cin>>fila;
    std::cout<<"ingrese la columna: "<<std::endl;
    std::cin>>columna;
    
    
    if(fila < 0 || fila >= FILAS || columna < 0 || columna >= COLUMNAS){
        std::cout << "Coordenadas fuera de rango. Por favor, ingrese valores válidos." << std::endl;
        return;
    }
    if (ocupado[fila][columna]) {
        std::cout << "La posicion ya esta ocupada. Por favor, elija otra." << std::endl;
        return;
    }
    std::cout<<"Ingresar placa: "<<std::endl;
    std::cin>>placa;

    ingresarvehiculo(&parqueadero[fila][columna], &ocupado[fila][columna], placa);

}
void opcion2(Vehiculo parqueadero[FILAS][COLUMNAS], bool ocupado[FILAS][COLUMNAS]){
    int fila, columna;
    std::cout<<"ingrese la fila: "<<std::endl;
    std::cin>>fila;
    std::cout<<"ingrese la columna: "<<std::endl;
    std::cin>>columna;
    if(fila < 0 || fila >= FILAS || columna < 0 || columna >= COLUMNAS){
        std::cout << "Coordenadas fuera de rango. Por favor, ingrese valores validos." << std::endl;
        return;
    }
    if (!ocupado[fila][columna]) {
        std::cout << "La posición esta vacia. No hay vehiculo para retirar." << std::endl;
        return;
    }
    retirarvehiculo(&parqueadero[fila][columna],&ocupado[fila][columna]);
    double costo = calcularcosto(&parqueadero[fila][columna]);
    std::cout << "Costo del parqueadero: " << costo << " pesos\n";

}
void opcion3(bool ocupado[FILAS][COLUMNAS]){
    mostrarMapa(ocupado);
}
  

    int main() {
        Vehiculo parqueadero[FILAS][COLUMNAS];
        bool ocupado[FILAS][COLUMNAS];

        for (int i = 0; i < FILAS; i++) {
            for (int o = 0; o < COLUMNAS; o++) {
                ocupado[i][o] = false;
            }
        }
        ingresarvehiculo(&parqueadero[11][2], &ocupado[11][2], "dgr367");
        

        mostrarMapa(ocupado);

        retirarvehiculo(&parqueadero[11][2], &ocupado[11][2]);
        

        double costo = calcularcosto(&parqueadero[11][2]);

        std::cout << "Costo del parqueadero: " << costo << " pesos\n";

        int opcion;
        do{
            std::cout << "Menu de opciones" << std::endl;
            std::cout << "[1] Ingresar vehiculo" << std::endl;
            std::cout << "[2] Retirar vehiculo" << std::endl;
            std::cout << "[3] Mostrar mapa" << std::endl;
            std::cout << "[4] salir" << std::endl;
            std::cout << "Seleccione una opcion: ";
            std::cin >> opcion;
            switch(opcion){
                case 1:
                    opcion1(parqueadero, ocupado);
                    break;
                case 2:
                    opcion2(parqueadero, ocupado);
                    break;
                case 3:
                    opcion3(ocupado);
                    break;
                case 4:
                    std::cout << "Saliendo del programa" << std::endl;
                    break;
                default:
                    std::cout << "Opcion no valida, por favor volver a intentarlo" << std::endl;

            }
        }while(opcion!=4);



        return 0;

    }
