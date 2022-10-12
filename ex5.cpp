#include <iostream>

using namespace std;

float mtToCent(float mt){
    return mt*100;
}

int main(){
    float mt;
    std::cout << "Qual a medida em metros?\n";
    std::cin >> mt;
    std::cout << mt <<" metros sao iguais a " << mtToCent(mt) << " centimetros\n";
    system("pause");
}