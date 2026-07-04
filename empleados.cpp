#include <iostream>
#include <string>

using namespace std;

struct Empleado {
    int numero;
    string nombres;
    int ventas[12]; 
    float salario;
    int suma; 
};

int main() {
    int n;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;

    Empleado E[n]; 

    for (int i = 1; i <= n; i++) {
        cout << "\n--- Registro del empleado " << i << " ---\n";
        cout << "Ingrese numero: ";
        cin >> E[i].numero;
        cout << "Ingrese nombres: ";
        cin >> E[i].nombres;
        
        for (int j = 1; j <= 12; j++) {
            cout << "Venta del mes " << j << ": ";
            cin >> E[i].ventas[j];
        }
        
        cout << "Ingrese salario: ";
        cin >> E[i].salario;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 12; j++) {
            E[i].suma = E[i].suma + E[i].ventas[j];
        }
    }
    int max = E[1].suma;
    int nume1 = E[1].numero;
    string nombe1 = E[1].nombres;

    for (int i = 2; i <= n; i++) {
        if (E[i].suma > max) {
            max = E[i].suma;
            nume1 = E[i].numero;
            nombe1 = E[i].nombres;
        }
    }

    cout << "\nEmpleado con mas ventas: " << nume1 << " - " << nombe1 << endl;
    for (int i = 1; i <= n; i++) {
        if (E[i].suma > 100) {
            E[i].salario = 1.1 * E[i].salario;
        }
        cout << "Salario final de " << E[i].nombres << ": " << E[i].salario << endl;
    }
    
    return 0;
}