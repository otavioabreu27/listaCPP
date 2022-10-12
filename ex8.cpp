#include <iostream>

using namespace std;

float calcSalario(float precoHora, int horasTrabalhadas){
    return precoHora * horasTrabalhadas;
}

int main(){
    float precoHora;
    int horasTrabalhadas;
    std::cout << "Digite o quanto voce ganha por hora e em seguida quantas horas trabalhou no mes:\n";
    std::cin >> precoHora >> horasTrabalhadas;
    std::cout << "Voce recebeu: R$" << calcSalario(precoHora, horasTrabalhadas) << ".\n";
    system("pause");
}