#include <iostream>

using namespace std;

class animal{
public:
    int comida;
    int quantidade;#include <iostream>

using namespace std;

class animal{
public:
    int comida;
    int quantidade;
    int kilo;
    double price;
};
animal a;


bool animalIsValid;

int main() {
    string nome;


    cout << "animal: ";
    cin >> nome;
    animalIsValid = false;
    do{
         if (nome == "Leopardo") {
             animalIsValid = true;
             cout << "Please enter the NUMBERS of Animals: ";
             cin >> a.quantidade;
             a.comida = 50;
             a.kilo = 5;
             int x = a.comida / a.quantidade;
             int calc = x / 30;
             cout << "Quantity of Food per Animal: " << x;
             cout << ""


            } else {
                cout << "please enter a animal valid: ";
                cin >> nome;
        }
    } 



    while(animalIsValid == false);
}

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
