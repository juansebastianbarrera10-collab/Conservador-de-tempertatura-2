#include <iostream>
#include <iomanip> //para setprecision

int main(){
//Entrada
double temperaturacelsius;
std::cout<<"ingresar la temperatura en el Celsius";
std::cin>>tempertaturaCelsius;

//Cálculos
double temperaturaFahrenheit=(temperaturaCelsius*9.0/5.0)+32.0;
double temperaturaKelvin=temperaturaCelsius+273.15;
double temperaturaRankine=(temperaturaCelsius+273.15)*9.0/5.0;// K a Rankie

//Salida con 2 decimales
std::cout<<std::fixed<<std:setprecision(2);
std::cout<<"Fahrenheit:"<<temperaturaFaherheit<<std::endl;
std::cout<<"Kelvin:"<<temperaturaKelvin<<std::endl;

return 0;
}

