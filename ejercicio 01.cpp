int main() {
    double temperatura_celsius;
    double temperatura_fahrenheit;
    double temperatura_kelvin;
    double temperatura_rankine;

    std::cout << "Ingrese la temperatura en Celsius: ";
    std::cin >> temperatura_celsius; 

    //conversion de temperatura//
    
    temperatura_fahrenheit = (temperatura_celsius * 9.0 / 5.0) + 32.0;
    temperatura_kelvin = temperatura_celsius + 273.15;
    temperatura_rankine = (temperatura_celsius + 273.15) * 9.0 / 5.0;

    
    std::cout << "Temperatura en Fahrenheit: " << temperatura_fahrenheit <<"\n";
    std::cout << "Temperatura en kelvin: " << temperatura_kelvin <<"\n";
    std::cout << "Temperatura en Rankine: " << temperatura_rankine <<"\n";

    return 0;
}
