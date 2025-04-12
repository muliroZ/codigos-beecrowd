#include <iostream>
using namespace std;

double fun(double a){
    return a*a - 3*a + 5;
}
int main(){
    double a;
    cout << "Digite o x da funcao \n";
    cout << "Funcao: f(x)=x^2-3x+5 \n";
    cin >> a;
    cout << "O valor de f(x) para x = " << a << ", e igual a: " << fun(a) << ".";
    return 0;
}