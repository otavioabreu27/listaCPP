#include <iostream>
#include <math.h>

using namespace std;

double circleRaioToArea(float raio){
    return M_PI * pow(raio, 2);
}

int main(){
    float raio;
    std::cout << "Digite o valor do raio:\n";
    std::cin >> raio;
    std::cout << "A area desse circulo e " << circleRaioToArea(raio) << ".\n";
    system("pause");
}