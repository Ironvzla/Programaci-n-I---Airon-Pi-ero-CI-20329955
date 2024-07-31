#include <iostream>
#include <cstdlib> // Para usar la función rand()
#include <ctime>   // Para inicializar la generación aleatoria

using namespace std;

// Función para generar un número aleatorio entre min y max (ambos inclusive)
int generarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    // Inicializar la generación aleatoria
    srand(time(nullptr));

    int minimo, maximo, cantidad;

    cout << "Ingresa el valor mínimo: ";
    cin >> minimo;
    cout << "Ingresa el valor máximo: ";
    cin >> maximo;
    cout << "Ingresa la cantidad de números a generar: ";
    cin >> cantidad;

    cout << "Números generados:\n";
    for (int i = 0; i < cantidad; ++i) {
        int numeroAleatorio = generarNumeroAleatorio(minimo, maximo);
        cout << numeroAleatorio << " ";
    }
    cout << endl;

    return 0;
}
