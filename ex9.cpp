#include <iostream>

using namespace std;

float fahrenheitToCelsius(float temp){
    return (5 * (temp-32) / 9);
}

int main(){
    float tempFahrenheit;
    std::cout << "Digite a temperatura em Fahrenheit:\n";
    std::cin >> tempFahrenheit;
    std::cout << "A temperatura em Celsius e: " << fahrenheitToCelsius(tempFahrenheit) << ".\n";
    system("pause");
}