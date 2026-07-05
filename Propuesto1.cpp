#include <iostream>
#include <string>

using namespace std;

struct Empleado {
    string nombres;
    char sexo;
    float sueldo;
};

int main() {
    int n;
    
    cout << "Ingrese la cantidad de trabajadores a registrar: ";
    cin >> n;
    
    Empleado lista[100]; 
    
    for (int i = 0; i < n; i++) {
        cout << "\n--- Empleado " << i + 1 << " ---" << endl;
        
        cout << "Ingrese el nombre (sin espacios): ";
        cin >> lista[i].nombres;
        
        cout << "Ingrese el sexo (M/F): ";
        cin >> lista[i].sexo;
        
        cout << "Ingrese el sueldo: ";
        cin >> lista[i].sueldo;
    }
    
    int posMayor = 0;
    int posMenor = 0;
    
    for (int i = 1; i < n; i++) {
        if (lista[i].sueldo > lista[posMayor].sueldo) {
            posMayor = i;
        }
        if (lista[i].sueldo < lista[posMenor].sueldo) {
            posMenor = i
        }
    }
    
    cout << "\n=======================================" << endl;
    cout << "EMPLEADO CON MAYOR SUELDO:" << endl;
    cout << "Nombre: " << lista[posMayor].nombres << endl;
    cout << "Sexo: " << lista[posMayor].sexo << endl;
    cout << "Sueldo: " << lista[posMayor].sueldo << endl;
    
    cout << "\nEMPLEADO CON MENOR SUELDO:" << endl;
    cout << "Nombre: " << lista[posMenor].nombres << endl;
    cout << "Sexo: " << lista[posMenor].seco << endl;
    cout << "Sueldo: " << lista[posMenor].sueldo << endl;
    
    return 0;
}