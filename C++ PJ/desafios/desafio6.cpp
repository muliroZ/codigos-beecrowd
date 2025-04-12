#include <iostream>
using namespace std;

float media(float valores[]){
    float medtotal=0;
    for (int i=0 ; i<5 ; i++){
        medtotal+=valores[i];
    }
    return medtotal/5;
}
int main(){
    float gastos[5];
    cout << "Informe o gasto de alimentacao de cada familia: \n";
    for (int i=0 ; i<5 ; i++){
        cout << "Familia " << i+1 << ": ";
        cin >> gastos[i];
    }
    cout << "\nA media total de gastos e de: " << media(gastos);
    for (int i=0 ; i<5 ; i++){
        cout << "\nFamilia " << i+1 << ": ";
        if (gastos[i]<media(gastos)){
            cout << "Abaixo da media.";
        } else if (gastos[i]>media(gastos)){
            cout << "Acima da media.";
        } else {cout << "Na media.";}
    }
    return 0;
}