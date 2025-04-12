#include <iostream>
#include <cmath>

using namespace std;
typedef double g;

int circulo();
int term();
int cIMC();
int hpt();
int equ1();
int equ2();

int main(){
    int opc;

    cout << "***************Calculadora Avancada***************\n";
    cout << "O que deseja fazer?\n\n";
    cout << "1. Calculadora de circulos\n";
    cout << "2. Conversor de temperatura\n";
    cout << "3. Calcular IMC\n";
    cout << "4. Calcular a hipotenusa\n";
    cout << "5. Equacoes do 1 grau\n";
    cout << "6. Equacoes do 2 grau\n\n";
    cin >> opc;
    
    switch(opc){
        case 1:{
        circulo();
        break;
        }
        case 2:{
        term();
        break;
        }
        case 3:{
        cIMC();
        break;
        }
        case 4:{
        hpt();
        break;
        }
        case 5:{
        equ1();
        break;
        }
        case 6:{
        equ2();
        break;
        }
        default:{
        cout << "Escolha uma das opcoes acima!";
        break;
        }
    }
    return 0;
}

int circulo(){
    int modulo;
    g raio;
    const g PI = 3.14159;
    g med;

    cout << "************BEM VINDO A CALCULADORA DE CIRCULOS************ \n";
    cout << "digite '1' para calcular a 'circunferencia' \n";
    cout << "digite '2' para calcular a area do circulo \n";
    cin >> modulo;

    switch (modulo)
    {
    case 1: {
    cout << "Digite aqui o numero do raio para calcularmos a medida da circunferencia: ";
    cin >> raio;
    g med = 2 * PI * raio;
    cout << "A medida da circunferencia e de: " << med << "cm";
    }
     break;
    case 2: {
    cout << "Digite aqui o numero do raio para calcularmos a medida da area: ";
    cin >> raio;
    g med = PI * pow(raio, 2);
    cout << "A medida da area e de: " << med << "cm^2";
    }
     break;
    default:
    cout << "Insira um valor valido!";
    }
    return 0;
}

int term(){
    int temp;

    cout << "CONVERSOR DE TEMPERATURA\n";
    cout << "Celsius <> Fahrenheit\n";
    cout << "Caso queira colocar a temperatura em 'F', digite '1'\n";
    cout << "Se quiser em 'C', digite '2'\n";
    cin >> temp;

    g fTemp, iTemp;

    switch (temp)
    {
    case 1: {
        cout << "digite a temperatura (em 'F'): ";
        cin >> iTemp;
        fTemp = (iTemp * 5 - 32 * 5) / 9;
        cout << "A temperatura e de: " << fTemp << "C";
    }
        break;
    case 2: {
        cout << "digite a temperatura (em 'C'): ";
        cin >> iTemp;
        fTemp = (iTemp * 9 + 32 * 5) / 5;
        cout << "A temperatura e de: " << fTemp << "F";
    }
        break;
    default:
        cout << "Escolha apenas entre as duas opcoes acima! (1 ou 2)\n";
        cout << "***************************************************";
        break;
    }
    return 0;
}

int cIMC(){
    g imc;
    g altura, peso;

    cout << "************Calcular IMC************" << endl;
    cout << "Coloque ao lado seu peso: ";
    cin >> peso;
    cout << "Coloque ao lado a sua altura (sem ','): ";
    cin >> altura;

    imc = peso / pow((altura / 100), 2);

    string cl;
    if (imc < 17)
    {
        cl = "Extremamente abaixo do peso";
        cout << "Seu IMC e de: " << imc << "kg/m2\n";
        cout << "Classificacao: " << cl;
    } else if (imc >= 17 && imc < 18.5)
    {
        cl = "Abaixo do peso";
        cout << "Seu IMC e de: " << imc << "kg/m2\n";
        cout << "Classificacao: " << cl;
    } else if (imc >= 18.5 && imc < 25)
    {
        cl = "Peso ideal";
        cout << "Seu IMC e de: " << imc << "kg/m2\n";
        cout << "Classificacao: " << cl;
    } else if (imc >= 25 && imc < 30)
    {
        cl = "Acima do peso";
        cout << "Seu IMC e de: " << imc << "kg/m2\n";
        cout << "Classificacao: " << cl;
    } else if (imc >= 30 && imc < 35)
    {
        cl = "Obesidade grau I";
        cout << "Seu IMC e de: " << imc << "kg/m2\n";
        cout << "Classificacao: " << cl;
    } else if (imc >= 35 && imc < 40)
    {
        cl = "Obesidade grau II";
        cout << "Seu IMC e de: " << imc << "kg/m2\n";
        cout << "Classificacao: " << cl;
    } else if (imc >= 40)
    {
        cl = "Obesidade grau III (Morbida)";
        cout << "Seu IMC e de: " << imc << "kg/m2\n";
        cout << "Classificacao: " << cl;
    }
    return 0;
}

int hpt(){
    g a, b, c;

    cout << "Calcular a hipotenusa\n";

    cout << "DIGITE O VALOR DO LADO 'A': ";
    cin >> a;

    cout << "DIGITE O VALOR DO LADO 'B': ";
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    cout << "O valor da hipotenusa e de: " << c << "cm";

    return 0;
}

int equ1(){
    g a, b, c;
    g solução;

    cout << "DIGITE O TERMO 'a' DE SUA EQUACAO(sendo ela linear: ax+b=0): ";
    cin >> a;

    cout << "DIGITE O TERMO 'b' DE SUA EQUACAO(sendo ela linear: ax+b=0): ";
    cin >> b;

    cout << "DIGITE O TERMO 'c' DE SUA EQUACAO(sendo ela linear: ax+b=0): ";
    cin >> c;

    if (a != 0)
    {
        solução = (c + -b) / a;
        cout << "A solucao da equacao " << a << "x + " << b << " = " << c << " e: " << solução << endl;
    } else {
        cout << "A equacao nao e linear (a = 0)" << endl;
    }
    
    return solução;
}

int equ2(){
    g a, b, c;

    cout << "digite o termo 'a' de sua equacao: ";
    cin >> a;
    cout << "digite o termo 'b' de sua equacao: ";
    cin >> b;
    cout << "digite o termo 'c' de sua equacao: ";
    cin >> c;

    g D = pow(b, 2) - 4 * a * c;
    g x1, x2;
    x1 = (-b + sqrt(D))/(2 * a);
    x2 = (-b - sqrt(D))/(2 * a);

    if (D < 0)
    {
        cout << "sua equacao nao possui raizes reais!";
    } else {
    if (D == 0){
        cout << "sua equacao possui apenas uma raiz real! \n";
        cout << x1;
    } else {
        cout << "sua equacao possui duas raizes reais! \n";
        cout << x1 << "\n";
        cout << x2;
    }
    }
    return 0;
}