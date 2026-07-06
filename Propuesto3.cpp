#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de personas: ";
    cin >> n;

    Persona lista[100];

    for (int i = 0; i < n; i++) {
        cout << "\n--- Persona " << i + 1 << " ---" << endl;
        cout << "Nombre (sin espacios): ";
        cin >> lista[i].nombre;
        cout << "Dia de nacimiento: ";
        cin >> lista[i].dia;
        cout << "Mes de nacimiento: ";
        cin >> lista[i].mes;
        cout << "Anio de nacimiento: ";
        cin >> lista[i].anio;
    }

    int mesBuscado;
    
    do{
        cout << "\nIngrese el numero de mes a buscar (o 0 para salir): ";
        cin >> mesBuscado;

        if (mesBuscado != 0) {
            cout << "\n--- Cumpleanios en el mes " << mesBuscado << " ---" << endl;
            bool encontrado = false;

            for (int i = 0; i < n; i++) {
                if (lista[i].mes == mesBuscado) {
                    cout << "- " << lista[i].nombre << " (Nacio el: " << lista[i].dia << "/" << lista[i].mes << "/" << lista[i].anio << ")" << endl;
                    encontrado = true;
                }
            }

            if (encontrado == false) {
                cout << "No hay personas que cumplan anios en este mes." << endl;
            }
        }
    } while (mesBuscado != 0);

    cout << "\nPrograma finalizado. ¡Hasta luego!" << endl;
    return 0;
}