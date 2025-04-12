#include <iostream>
using namespace std;

int fat(int x){
    int fatorial = 1;
    for (int i = 1; i <= x; i++){
        fatorial*=i;
    }
    return fatorial;
}
int main(){
    int num;
    cout << "FATORIAL! \n";
    cout << "Digite um numero inteiro positivo para calcular o fatorial: ";
    cin >> num;

    cout << "O fatorial de " << num << " e: " << fat(num);
    return 0;
}
// NÃO CONSEGUI SOZINHO!!! 10/02/25