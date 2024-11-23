#include <iostream>
#include <vector>
using namespace std;

vector<float> promedios;
int vectorSize;
float userInput, sum = 0, promedio;
bool introducirCalificacion = true;
char decision;

int main()
{
    do
    {
        cout << "Ingrese la calificación: \n";
        cin >> userInput;
        promedios.push_back(userInput);

        cout << "¿Desea seguir agregando calificaciones? s/n\n";
        cin >> decision;
        if (decision == 's' || decision == 'S')
        {
        }
        else
        {
            introducirCalificacion = false;
            vectorSize = (int)promedios.size();
            for (int i = 0; i < vectorSize; i++)
            {
                sum += promedios[i];
            }

            promedio = sum / (float)vectorSize; // Se castea para evitar warnings
            cout << "El promedio es: " << promedio << endl;
        }
    } while (introducirCalificacion);
}
