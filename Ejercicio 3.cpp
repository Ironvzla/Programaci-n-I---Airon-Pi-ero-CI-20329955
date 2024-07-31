#include <iostream>
#include <cstdlib> // Para usar la función system("pause")

using namespace std;

// Función para simular abrir las puertas del ascensor
void abrirPuertas() {
    cout << "Se abren las puertas" << endl;
}

// Función para simular cerrar las puertas del ascensor
void cerrarPuertas() {
    cout << "Se cierran las puertas" << endl;
}

// Función para simular el ascensor subiendo
void ascensorSubiendo(int piso) {
    cout << "El ascensor va subiendo al piso " << piso << endl;
}

// Función para simular el ascensor bajando
void ascensorBajando(int piso) {
    cout << "El ascensor va bajando al piso " << piso << endl;
}

int main() {
    int pisoDeseado;

    cout << "Ingresa el número de piso al que deseas ir: ";
    cin >> pisoDeseado;

    cout << "El ascensor se encuentra en el piso 1" << endl;
    abrirPuertas();
    cerrarPuertas();

    if (pisoDeseado > 1) {
        for (int piso = 2; piso <= pisoDeseado; ++piso) {
            ascensorSubiendo(piso);
        }
    } else if (pisoDeseado < 1) {
        for (int piso = 1; piso >= pisoDeseado; --piso) {
            ascensorBajando(piso);
        }
    }

    cout << "Llegaste al piso " << pisoDeseado << ". ¡Bienvenido!" << endl;

    // Pausa para que el usuario pueda leer los mensajes
    system("pause");

    return 0;
}
