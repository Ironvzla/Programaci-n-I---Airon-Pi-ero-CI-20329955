// En este programa: Se solicita el nombre del cliente, el producto, el precio por unidad y la cantidad. Calculamos el total sin descuento y aplicamos el descuento si corresponde. Finalmente, mostramos la factura con los detalles requeridos.

#include <iostream>
#include <string>
#include <iomanip> // Para formatear la salida

using namespace std;

// Función para calcular el descuento
double calcularDescuento(double total) {
    const double PORCENTAJE_DESCUENTO = 0.20;
    if (total > 1000) {
        return total * PORCENTAJE_DESCUENTO;
    } else {
        return 0.0;
    }
}

int main() {
    string nombreCliente, producto;
    double precio, cantidad;

    cout << "Nombre del cliente: ";
    getline(cin, nombreCliente); // Leer el nombre completo (incluyendo espacios)

    cout << "Producto: ";
    getline(cin, producto);

    cout << "Precio por unidad: ";
    cin >> precio;

    cout << "Cantidad: ";
    cin >> cantidad;

    double totalSinDescuento = precio * cantidad;
    double descuento = calcularDescuento(totalSinDescuento);
    double totalConDescuento = totalSinDescuento - descuento;

    cout << "\nFactura:\n";
    cout << "Cliente: " << nombreCliente << endl;
    cout << "Producto: " << producto << endl;
    cout << "Precio unitario: $" << fixed << setprecision(2) << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Total sin descuento: $" << fixed << setprecision(2) << totalSinDescuento << endl;
    cout << "Descuento: $" << fixed << setprecision(2) << descuento << endl;
    cout << "Total a pagar (con descuento): $" << fixed << setprecision(2) << totalConDescuento << endl;

    return 0;
}
