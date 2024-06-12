#include <iostream>
using namespace std;
constexpr int n = 6;
// Funcion de indicaciones
void instruccion(void)
{
    cout << "Este programa explica el uso de funcion void";
    cout << "\nque void immplica que no hay variables de retorno o argumentos de entrada";
    cout << "\ntambien esta el uso de arregos de multiples dimensiones";
    cout << "\nEl ejemplo es calculo de nota final para varios estudiantes"
            "\n";
}

float *calculo_notafin(float notas[][n], float ponderaciones[], int m)
{
    float notafinal[m];
    for (int j = 0; j < m; j++)
    {
        notafinal[j] = 0;
        for (int i = 0; i < n; i++)
        {
            notafinal[j] = notafinal[j] + notas[j][i] * ponderaciones[i];
        }
    }
    return notafinal;
}
int main()
{

    // Variables que requiero en el programa

    int m;

    float ponderaciones[n] = {0.15, 0.2, 0.1, 0.1, 0.20, 0.25};

    cout << "Cuantos alumnos son:" << "\n";
    cin >> m;

    string nombres[m];
    float notas[m][n];

    for (int i = 0; i < m; i++)
    {
        cout << "Nombre del estudiante" << i + 1 << ": ";
        cin >> nombres[i];

        cout << nombres[i] << "Nota de p1" << "\n";
        cin >> notas[i][0];
        cout << nombres[i] << "Nota de p2" << "\n";
        cin >> notas[i][1];
        cout << nombres[i] << "Nota de c1" << "\n";
        cin >> notas[i][2];
        cout << nombres[i] << "Nota de c2" << "\n";
        cin >> notas[i][3];
        cout << nombres[i] << "Nota de labs" << "\n";
        cin >> notas[i][4];
        cout << nombres[i] << "Nota de proyecto" << "\n";
        cin >> notas[i][5];
    }

    float *notasfinal = calculo_notafin(notas, ponderaciones, m);

    for (int i = 0; i < n; i++)
    {
        cout << nombres[i] << "Su nota final es :" << notasfinal << "\n";
    }

    instruccion();
    return 0;
}