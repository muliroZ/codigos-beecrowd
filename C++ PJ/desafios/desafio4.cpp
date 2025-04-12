#include <iostream>
using namespace std;

double pot(double b, double e){
    cout << "Digite o numero da base(R): ";
    cin >> b;
    cout << "Digite o numero do expoente(N): ";
    cin >> e;
    
    double p = 1;
    for (int i = 0; i < e; i++){
        p*=b;
    }
    return p;
}
int main(){
    double x, y;
    char res;
    cout << pot(x, y) << endl;
    while (true){
        cout << "Gostaria de realizar mais uma operacao?(S ou N)\n";
        cin >> res;
        if (res == 'S'||res == 's'){
            cout << pot(x, y) << endl;
        }else {
            break;
        }
    }
    return 0;
}
//NÃO CONSEGUI SOZINHO!!! 10/02/25