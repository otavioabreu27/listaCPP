#include <iostream>

using namespace std;

int soma(int a, int b){
    return a + b;
}

int main(){
    int num1,num2;
    std::cout << "Digite um valor:\n";
    std::cin >> num1;
    std::cout << "Digite outro valor: \n";
    std::cin >> num2;
    std::cout << soma(num1,num2) << "\n";
    system("pause");
}