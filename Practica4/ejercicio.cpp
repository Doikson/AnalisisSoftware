#include <iostream>
#include <string>
using namespace std;

string nombre, apellidoP, apellidoM, fecha;

int main()
{

    cout << "Ingresa Nombre: \n";
    getline(cin, nombre);

    cout << "Ingresa Apellido Paterno: \n";
    getline(cin, apellidoP);

    cout << "Ingresa Apellido Materno: \n";
    getline(cin, apellidoM);

    cout << "Ingresa FechaNacimiento: \n";
    cout << "Utiliza el formato dd/mm/aaaa: \n";
    getline(cin, fecha);

    // El primer carácter corresponderá a la primera letra del nombre
    nombre = nombre.substr(0, 1);

    // Los siguientes 3 caracteres corresponderán a las primeras tres letras del apellido paterno.
    apellidoP = apellidoP.substr(0, 3);

    // Los siguientes 2 caracteres corresponderán a las últimas 2 letras del apellido materno
    apellidoM = apellidoM.substr(apellidoM.length() - 2);

    // Los siguientes 2 caracteres corresponderán a su mes de nacimiento.
    fecha = fecha.substr(3, 2);

    cout << nombre + apellidoP + apellidoM + fecha << "@northwind.com";
}