#include <iostream>

using namespace std;

class animal{
public:
    int comida;
    int quantidade;
    float peso;
};
animal a;

void functionCalc() {

    cout << a.comida * a.quantidade / 30;

}

bool animalIsValid = true;

int main() {
    animal a;
    string nome;


    cout << "animal: ";
    cin >> nome;
    do {
        if (animalIsValid == false) {
            cout << "please enter a valid animal: ";
            cin >> nome;
        } 
        if (nome == "leopardo") {
            a.comida = 30;
            a.quantidade = 5;
            cout << 444;

        } if (nome == "macaco") {
            a.comida = 30;
            a.quantidade = 5;
            a.peso = 15;
            cout << &functionCalc;
            return 0;
        }

    }
    while (!animalIsValid);





    return 0;
}
