#include <iostream>

using namespace std;

class animal{
public:
    int comida;
    int quantidade;
    float peso;
};

bool animalIsValid;

int main() {
    animal a;
    string nome;


    cout << "animal: ";
    cin >> nome;
    animalIsValid = false;
    do{
         if (nome == "leopardo"){
             animalIsValid = true;
             cout << "bimbimbambam";

            } else {
                cout << "please enter a animal valid: ";
                cin >> nome;
        }
    } 



    while(animalIsValid == false);
}
