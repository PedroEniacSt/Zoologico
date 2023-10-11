#include <iostream>

using namespace std;

class animal{
    public:
    int comida;
    int quantidade;
    float peso;
};
int main() {
    animal a;
    string nome;
    
    cout << "animal: ";
    cin >> nome;
    
    if(nome == "leopardo"){
        a.comida = 10;
        a.quantidade = 5;
        a.peso = 15;
        cout << a.peso << endl << a.comida << endl << a.quantidade;
    } else {
        cout << "invalido";
        
        return 0;
    }
    
    return 0;
}
