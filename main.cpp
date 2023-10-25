#include <iostream>

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
bool repeat;

int main() {
    string nome;
    string verify;



    repeat = true;
    while(repeat){
        cout << "There's some of animals that we have in our Zoo: "<< endl;
        cout << "__________________________" << endl;
        cout << "|         ANIMALS        |" << endl;
        cout << "|       ----------       |" << endl;
        cout << "|Leopardo, Jabuti, Macaco|" << endl;
        cout << "|       ----------       |" << endl;
        cout << "|________________________|" << endl;
        cout << "Which animal you want insert data?: ";
        cin >> nome;
        animalIsValid = false;
        do{
            if (nome == "Leopardo" || nome == "leopardo") {
                animalIsValid = true;
                cout << "Please enter the NUMBERS of Animals: ";
                cin >> a.quantidade;
                a.price = 3000,00;
                a.comida = 500;
                a.kilo = 5;
                int x = a.comida / a.quantidade;
                const int y = a.comida * a.kilo / 30;
                int calc = a.comida / a.quantidade * a.price;
                cout << "Animal: Leopardo" << endl;
                cout << "Quantity of Food per Animal: 5" << endl;
                cout << "Quantity of Food per Day: " << x << endl;
                cout << "Quantity of Food per Month: " << y << endl;
                cout << "Price Calculeted per Month: " << calc << endl;
                cout << "Price Estimated: 30000" << endl;

                repeat = false;
            } else if (nome == "Macaco" || nome == "macaco") {
                animalIsValid = true;
                cout << "Please enter the NUMBERS of Animals: ";
                cin >> a.quantidade;
                a.price = 1500,00;
                a.comida = 300;
                a.kilo = 5;
                int x = a.comida / a.quantidade;
                const int y = a.comida * a.kilo / 30;
                int calc = a.comida / a.quantidade * a.price;
                cout << "Animal: Macaco" << endl;
                cout << "Quantity of Food per Animal: 5" << endl;
                cout << "Quantity of Food per Day: " << x << endl;
                cout << "Quantity of Food per Month: " << y << endl;
                cout << "Price Calculeted per Month: " << calc << endl;
                cout << "Price Estimated: 15000" << endl;

                repeat = false;
            } else if (nome == "Jabuti" || nome == "jabuti") {
                animalIsValid = true;
                cout << "Please enter the NUMBERS of Animals: ";
                cin >> a.quantidade;
                a.price = 800,00;
                a.comida = 250;
                a.kilo = 5;
                int x = a.comida / a.quantidade;
                const int y = a.comida * a.kilo / 30;
                int calc = a.comida / a.quantidade * a.price;
                cout << "Animal: Jabuti" << endl;
                cout << "Quantity of Food per Animal: 5" << endl;
                cout << "Quantity of Food per Day: " << x << endl;
                cout << "Quantity of Food per Month: " << y << endl;
                cout << "Price Calculeted per Month: " << calc << endl;
                cout << "Price Estimated: 15000" << endl;

                repeat = false;
            } else {
                cout << "please enter a animal valid: ";
                cin >> nome;
            }
            cout << "Want continue? (Y = Yes / No = Press any key): ";
            cin >> verify;
            if (verify == "Y" || verify == "y"){
                repeat = true;
                break;
            } 
        }




        while(animalIsValid == false);

    }



}
