#include <iostream>
#include <vector>

using namespace std;

struct Servicio
{
    int num_servicio;
    string descripcion;
    float precio;
};

vector<Servicio> servicios = {
    {1, "Lavado Coche", 80},
    {2, "Limpiado Motor", 60},
    {3, "Aspirado Interiores", 30}};

vector<Servicio> servicios_seleccionados;

int num_servicio, opcion;
float precio_final = 0;

void registrar_servicio();
void realizar_pago();

int main()
{
    do
    {
        cout << "\nMenú:\n";
        cout << "1. Registrar servicio\n";
        cout << "2. Realizar pago\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            registrar_servicio();
            break;
        case 2:
            realizar_pago();
            break;
        case 3:
            cout << "Saliendo del Programa....";
            break;
        default:
            cout << "Opción no válida.\n";
            break;
        }
    } while (opcion != 3);

}

void registrar_servicio()
{
    for (int i = 0; i < servicios.size(); i++)
    {
        cout << "Número de servicio: " << servicios[i].num_servicio << "\n";
        cout << "Descripción: " << servicios[i].descripcion << "\n";
        cout << "Precio: $" << servicios[i].precio << "\n";
        cout << "--------------------------\n";
    }

    cout << "Ingrese el número del servicio que desea: ";
    cin >> num_servicio;

    if (num_servicio > 0 && num_servicio <= servicios.size())
    {
        // Se usa -1 porque se considera que el indice de los vectores es 0
        servicios_seleccionados.push_back(servicios[num_servicio - 1]);

        precio_final = precio_final + servicios[num_servicio - 1].precio;
    }
    else
    {
        cout << "Número de servicio inválido.\n";
    }
}

void realizar_pago()
{
    if (servicios_seleccionados.empty())
    {
        cout << "\n---No hay servicios registrados.---\n";
    }
    else
    {
        cout << "\n---Productos Seleccionados---\n";
        for (int i = 0; i < servicios_seleccionados.size(); i++)
        {
            cout << "Descripción: " << servicios_seleccionados[i].descripcion << "\n";
            cout << "Precio: $" << servicios_seleccionados[i].precio << "\n";
            cout << "--------------------------\n";
        }
        cout << "PRECIO FINAL: $" << precio_final << "\n";
    }
}
