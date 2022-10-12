#include <iostream>

using namespace std;

string pegaNum(){
    string num;
    std::cout << "Digite um numero:\n";
    std::cin >> num; 
    return num;
}

int main(){
    string num = pegaNum();
    std::cout << "O numero informado foi " << num << "\n";
    system("pause");
}