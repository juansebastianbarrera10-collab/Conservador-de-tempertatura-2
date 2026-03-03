#include<iostream>
#include<cmath>
#include<iomanip>

int main(){
double a, b, c;
std::cout<<"Ladosmayor ultimo):";
std::cin>>a>>b>>c;

//Validez
if(a<=0||b<=||c<=0||a+b<=c||a+b<=b||b+c<=a){std::cout<<"No es triangulo valido./n";
}

//Por lados
std::string lagos=(a==b&&b==c)?"equilaterp": (a==b||a==c||b==c)?"isosceles":"escaleno";

//Por angulos (c como mayor) double s=pow(a,2)+pow(b,2);
double h=pow(c,2);
std::string ang;
if(std::fabs(s-h)<1e-6)ang="rectangulo";
else if (s>h)         ang="acutangulo";
else        ang="obtusangulo";

std::cout<<"Triangulo"<<lados>>"y"<<ang<<"./n";
return 0;
}
