#include <iostream>
#include <cmath> // Usaremos la función pow() para el cálculo del área del círculo

using namespace std;

// Esta función la usaremos para calcular el área del círculo
double calcularAreaCirculo(double radio) {
    return M_PI * pow(radio, 2);
}

// Esta función la usaremos para calcular el área del cuadrado
double calcularAreaCuadrado(double lado) {
    return pow(lado, 2);
}

// Esta función la usaremos para calcular el área del triángulo
double calcularAreaTriangulo(double base, double altura) {
    return 0.5 * base * altura;
}

int main() {
    int opcion;
    double resultado;

    cout << "Selecciona la figura geométrica:\n";
    cout << "1. Círculo\n";
    cout << "2. Cuadrado\n";
    cout << "3. Triángulo\n";
    cout << "Ingresa el número de la opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            double radio;
            cout << "Ingresa el radio del círculo: ";
            cin >> radio;
            resultado = calcularAreaCirculo(radio);
            break;
        case 2:
            double lado;
            cout << "Ingresa el lado del cuadrado: ";
            cin >> lado;
            resultado = calcularAreaCuadrado(lado);
            break;
        case 3:
            double base, altura;
            cout << "Ingresa la base del triángulo: ";
            cin >> base;
            cout << "Ingresa la altura del triángulo: ";
            cin >> altura;
            resultado = calcularAreaTriangulo(base, altura);
            break;
        default:
            cout << "Opción incorrecta.\n";
            return 1;
    }

    cout << "El área es: " << resultado << endl;

    return 0;
}
