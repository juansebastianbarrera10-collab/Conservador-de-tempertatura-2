#include <iostream>


// Definición de permisos con bits
const int LEER     = 0b001;  
const int ESCRIBIR = 0b010; 
const int EJECUTAR = 0b100;  

int main() {
    int permisos;

    std::cout << "Ingrese un valor entero de permisos (0 - 7): ";   
    //0 - ningún permiso

    //1 - leer

    //2 - escribir

    //3 - leer + escribir

    //4 - ejecutar

    //5 - leer + ejecutar

    //6 - escribir + ejecutar

    //7 - leer + escribir + ejecutar
    std::cin >> permisos;

    std::cout << "Permisos actuales:" << "\n" ;

    // Verificar permisos usando AND (&)
    if (permisos & LEER)
        std::cout << "Tiene permiso de LEER" << "\n";
    else
        std::cout << "No tiene permiso de LEER" << "\n";

    if (permisos & ESCRIBIR)
        std::cout << "Tiene permiso de ESCRIBIR" << "\n";
    else
        std::cout << "No tiene permiso de ESCRIBIR" << "\n";

    if (permisos & EJECUTAR)
        std::cout << "Tiene permiso de EJECUTAR" << "\n";
    else
        std::cout << "No tiene permiso de EJECUTAR" ;

    //agregar permiso usando OR (|)
    std::cout << "Agregando permiso de EJECUTAR..." << "\n";
    permisos = permisos | EJECUTAR;

    //quitar permiso usando AND y NOT (& y ~)
    std::cout << "Quitando permiso de ESCRIBIR..." <<"\n";
    permisos = permisos & ~ESCRIBIR;
    std::cout << "\nPermisos finales: " << "\n";

    if (permisos & LEER)
        std::cout << "LEER ";
    if (permisos & ESCRIBIR)
        std::cout << "ESCRIBIR ";
    if (permisos & EJECUTAR)
        std::cout << "EJECUTAR ";

    std::cout <<"\n";

    return 0;
}
