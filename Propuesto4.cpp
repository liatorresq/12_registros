#include <iostream>
#include <string>

using namespace std;

struct Atleta
{
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main()
{
    int n;

    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;

    Atleta atleta[100];

    for(int i=0; i< n; i++)
    {
        cout << "\nAtleta " << i+1 << endl;

        cout << "Nombre: ";
        cin >> atleta[i].nombre;

        cout << "Pais: ";
        cin >> atleta[i].pais;

        cout << "Disciplina: ";
        cin >> atleta[i].disciplina;

        cout << "Numero de medallas: ";
        cin >> atleta[i].medallas;
    }

    string buscar;

    cout << "\nIngrese el pais a buscar: ";
    cin >> buscar;

    int mayor = 0;

    cout << "\nAtletas encontrados:\n";

    for(int i=0; i<n; i++)
    {
        if(atleta[i].pais == buscar)
        {
            cout << atleta[i].nombre << endl;
            cout << atleta[i].disciplina << endl;
            cout << atleta[i].medallas << endl;

            if(atleta[i].medallas > mayor)
            {
                mayor = atleta[i].medallas;
            }
        }
    }

    cout << "\nMayor numero de medallas: " << mayor << endl;

    return 0;
}