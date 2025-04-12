#include <iostream>
using namespace std;

int main(){
    int idade, renda;
    cout << "Validacao Moradia Popular \n";
    cout << "Informe sua idade: ";
    cin >> idade;
    cout << "Informe sua renda individual: ";
    cin >> renda;

    if (idade >= 21 && renda <= 1200)
    {
        cout << "Voce esta apto para participar do programa!";
    } else {
        cout << "Voce nao atende aos criterios de elegibilidade do programa.";
    }
    return 0;
}