#include <iostream>

double adicao(double x, double y){
    std::cout << "digite os numeros que deseja somar:\n";
    std::cin >> x >> y;
    return x + y;
}
double subtracao(double x, double y){
    std::cout << "digite os numeros que deseja subtrair:\n";
    std::cin >> x >> y;
    return x - y;
}
double multiplicacao(double x, double y){
    std::cout << "digite os numeros que deseja multiplicar:\n";
    std::cin >> x >> y;
    return x * y;
}
double divisao(double x, double y){
    std::cout << "digite os numeros que deseja dividir:\n";
    std::cin >> x >> y;
    return x / y;
}
int main(){
    int op;
    std::cout << "--selecione a operacao--\n";
    std::cout << "1. adicao(+)\n";
    std::cout << "2. subtracao(-)\n";
    std::cout << "3. multiplicacao(*)\n";
    std::cout << "4. divisao(/)\n\n";
    std::cin >> op;
    std::cout << "\n";

    double x, y;

    if(op == 1){
        std::cout << adicao(x, y);
    } else if(op == 2){
        std::cout << subtracao(x, y);
    } else if(op == 3){
        std::cout << multiplicacao(x, y);
    } else if(op == 4){
        std::cout << divisao(x, y);
    } else {
        std::cout << "TENTE NOVAMENTE!";
    }
    return 0;
}