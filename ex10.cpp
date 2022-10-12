#include <iostream>

using namespace std;

float celsiusToFahrenheit(float temp){
    return (temp*1.8)+32;
}

int main(){
    float tempCelsius;
    std::cout << "Digite a temperatura em Celsius:\n";
    std::cin >> tempCelsius;
    std::cout << "A temperatura em Fahrenheit e: " << celsiusToFahrenheit(tempCelsius) << ".\n";
    system("pause");
    system("cls");
}