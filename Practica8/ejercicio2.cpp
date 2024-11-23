#include <iostream>
#include <vector>
using namespace std;

vector<string> nombres;
string nombre;
char decision = 's';

int main() {
    while (decision == 's' || decision == 'S') {
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        nombres.push_back(nombre);

        cout << "¿Desea seguir agregando nombres? s/n: ";
        cin >> decision;
    }

    cout << "Ingrese el nombre a buscar: ";
    cin >> nombre;

    bool encontrado = false;
    for (int i = 0; i < (int)nombres.size(); i++) {
        if (nombres[i] == nombre) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El nombre " << nombre << " fue encontrado en la lista." << endl;
    } else {
        cout << "El nombre " << nombre << " no se encuentra en la lista." << endl;
    }

}
