#include <iostream>
#include <math.h>

using namespace std;

float achaArea(){
    float lado;
    std::cout << "Digite o tamanho do lado do quadrado:\n";
    std::cin >> lado;
    return lado*2;
}

int main(){
    float area = achaArea();
    std::cout << "O dobro da area do quadrado informado e: " << area*2 << "\n";
    system("pause");
}