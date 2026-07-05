#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombres;
    string dni;
    int edad;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de personas a registrar: ";
    cin >> n;

    Persona lista[100];

    for (int i = 0; i < n; i++) {
        cout << "\n--- Persona " << i + 1 << " ---" << endl;
        cout << "Ingrese nombre (sin espacios): ";
        cin >> lista[i].nombres;
        cout << "Ingrese DNI: ";
        cin >> lista[i].dni;
        cout << "Ingrese edad: ";
        cin >> lista[i].edad;
    }

    int mayores50 = 0;
    int sumaEdades = 0;

    for (int i = 0; i < n; i++) {
        if (lista[i].edad > 50) {
            mayores50++;
        }
        sumaEdades = sumaEdades + lista[i].edad;
    }

    float promedio;
    promedio = sumaEdades * 1.0 / n;

    cout << "\n================ RESULTADOS ================" << endl;
    cout << "Cantidad de personas mayores de 50 anos: " << mayores50 << endl;
    cout << "El promedio de edades es: " << promedio << endl;

    cout << "\n========= LISTADO DE PERSONAS =========" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Persona " << i + 1 << ": " << lista[i].nombres;
        cout << " - DNI: " << lista[i].dni;
        cout << " - Edad: " << lista[i].edad << endl;
    }

    return 0;
}