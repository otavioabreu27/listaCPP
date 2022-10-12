#include <iostream>

using namespace std;

float achaMedia(float nota1, float nota2, float nota3, float nota4){
    float media;
    media = (nota1 + nota2 + nota3 + nota4)/4;
    return media;
}

int main(){
    float nota1, nota2, nota3, nota4;
    std::cout << "Digite as notas abaixo:\n";
    std::cin >> nota1 >> nota2 >> nota3 >> nota4;
    std::cout << achaMedia(nota1, nota2, nota3, nota4) << "\n";
    system("pause");
}