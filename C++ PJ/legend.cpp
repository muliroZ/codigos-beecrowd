#include <iostream>
#include <ctime>
using namespace std;

enum Actions {STRIKE, BLAST, AURA_EX, COUNTER};

int enemyAction(Actions action){
    srand(static_cast<unsigned int>(time(0)));
    int i = rand() % 3;
    int act = Actions(i);
    return act;
}
void startClash(int life1, int life2){
    srand(static_cast<unsigned int>(time(0)));
    int key = rand() % 2 + 1;
    cout << "Uma disputa feroz acontece neste exato momento\n";
    if (key == 1){
        life1 -= 15;
        cout << "You: " << life1 << '\n';
        cout << "O seu oponente se sobressai e te subjulga em poucos segundos!\n\n";
    } else if (key == 2){
        life2 -= 15;
        cout << "Enemy: " << life2 << '\n';
        cout << "Voce toma as redeas e acaba completamente com o ataque de seu oponente!\n\n";
    }
}
int skills(){
    int opc;
    cout << "Voce esta contra um oponente poderoso, escolha suas acoes com cuidado!\n\n";
    cout << "O que iras fazer?\n";
    cout << "1. Investida\n";
    cout << "2. Ataque de poder\n";
    cout << "3. Explosao de aura\n";
    cout << "4. Contra-ataque\n";
    cin >> opc;
    return opc;
}
int main(){
    Actions action;
    string skill[4]={"Investida", "Ataque de poder", "Explosao de aura", "Contra ataque"};
    int life1 = 100;
    int life2 = 100;
    for (int i = 0; i <= 100; i++){
        int x = skills();
    switch (x){
    case 1:
        cout << "O oponente usou um(a): " << skill[enemyAction(action)] << '\n';
        if (enemyAction(action) == COUNTER){
            life1 -= 15;
            cout << "You: " << life1 << "\n\n";
            cout << "Seu oponente previu seus movimentos e evitou facilmente seus golpes, atacando-o logo em seguida!\n\n";
        } else if (enemyAction(action) == BLAST){
            life1 -= 5;
            life2 -= 5;
            cout << "You: " << life1 << '\n';
            cout << "Enemy: " << life2 << "\n\n";
            cout << "Os dois ataques ao mesmo tempo causaram danos aos dois!\n\n";
        } else if (enemyAction(action) == STRIKE){
            startClash(life1, life2);
        } else {
            life2 -= 10;
            cout << "Enemy: " << life2 << "\n\n";
            cout << "Voce atacou seu oponente com golpes poderosos e ele nao conseguiu revidar!\n\n";
        }
        break;
    case 2:
        cout << "O oponente usou um(a): " << skill[enemyAction(action)] << '\n';
        if (enemyAction(action) == AURA_EX){
            life1 -= 15;
            cout << "You: " << life1 << "\n\n";
            cout << "Seu oponente previu seus movimentos e evitou facilmente seus golpes, atacando-o logo em seguida!\n\n";
        } else if (enemyAction(action) == STRIKE){
            life1 -= 5;
            life2 -= 5;
            cout << "You: " << life1 << '\n';
            cout << "Enemy: " << life2 << "\n\n";
            cout << "Os dois ataques ao mesmo tempo causaram danos aos dois!\n\n";
        } else if (enemyAction(action) == BLAST){
            startClash(life1, life2);
        } else {
            life2 -= 10;
            cout << "Enemy: " << life2 << "\n\n";
            cout << "Voce atacou seu oponente com golpes poderosos e ele nao conseguiu revidar!\n\n";
        }
        break;
    case 3:
        cout << "O oponente usou um(a): " << skill[enemyAction(action)] << '\n';
        if (enemyAction(action) == BLAST){
            life2 = life2 - 15;
            cout << "Enemy: " << life2 << "\n\n";
            cout << "Voce leu seu oponente como um livro, e o contra-atacou de maneira esplendida!\n\n";
        } else if (enemyAction(action) == STRIKE){
            life1 = life1 - 15;
            cout << "You: " << life1 << "\n\n";
            cout << "Voce comete um erro e deixa a guarda aberta, seu oponente ataca com tudo!\n\n";
        } else {cout << "Voces se encaram, calculando os proximos movimentos\n\n";}
        break;
    case 4:
        cout << "O oponente usou um(a): " << skill[enemyAction(action)] << '\n';
        if (enemyAction(action) == STRIKE){
            life2 = life2 - 15;
            cout << "Enemy: " << life2 << "\n\n";
            cout << "Voce leu seu oponente como um livro, e o contra-atacou de maneira esplendida!\n\n";
        } else if (enemyAction(action) == BLAST){
            life1 = life1 - 15;
            cout << "You: " << life1 << "\n\n";
            cout << "Voce comete um erro e deixa a guarda aberta, seu oponente ataca com tudo!\n\n";
        } else {cout << "Voces se encaram, calculando os proximos movimentos\n\n";}
        break;
    default:
        cout << "Escolha uma opcao valida!\n";
        break;
    }
    } while (life2 > 0 && life1 > 0)
    if (life2 < 0){
        cout << "Parabens! Voce venceu!\n";
        if (life1 >= 70){
            cout << "Voce acabou completamente com seu oponente! Tem certeza se ele pelo menos tentou?";
        } else if (life1 >= 30 && life1 < 70){
            cout << "Voce travou um embate contra um oponente forte, continue assim";
        } else if (life1 < 30){
            cout << "Voce travou um duelo epico que sera lembrado por todos! Qualquer passo em falso era derrota certa!";
        }
    } else if (life1 < 0){
        cout << "Que pena, voce perdeu!\n";
        cout << "Que tal tentar de novo?";
    }
    return 0;
}