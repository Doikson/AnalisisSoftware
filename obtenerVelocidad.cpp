#include <iostream>
using namespace std;

float distancia, tiempo, resultado;

int main() {
    
    cout << "Ingresa la Distancia: "; 
    cin >> distancia;
    cout << "Ingresa el Tiempo: "; 
    cin >> tiempo;

    obtenerVelocidad(distancia, tiempo);

    cout << "La velocidad es: " << resultado << " unidades de distancia por unidad de tiempo." << endl;

    return 0;
}

void obtenerVelocidad(float distancia, float tiempo) {
    resultado = distancia / tiempo;
}
