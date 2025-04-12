#include <iostream>
using namespace std;

int main(){
    double a, b ,c ,m;
    cout << "Calcular Media: \n";
    cout << "Informe a nota do aluno(a) nas determinadas provas: \n\n";
    cout << "Prova1: ";
    cin >> a;
    cout << "Prova2: ";
    cin >> b;
    cout << "Prova3: ";
    cin >> c;
    cout << "Obrigado! Agora informe abaixo a media da turma: \n";
    cin >> m;

    double media = (a+b+c)/3;
    if (media > m){
        cout << "O aluno(a) esta acima da media!: " << media;
    } else if (media < m){
        cout << "O aluno(a) esta abaixo da media!: " << media;
    } else {
        cout << "O aluno(a) esta na media!: " << media;
    }
    return 0;
}