#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Declaracion de variables
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char estaExenta;

    //Entrada de datos
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << "¿La factura esta exenta? S/N: ";
    cin >> estaExenta;

    //Proceso
    calculoDescuento = (subtotal * descuento) / 100;

    if (estaExenta == 's' || estaExenta == 'S')
    {
        calculoImpuesto = 0;
    } else {
            calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    }
    
    total = subtotal - calculoDescuento + calculoImpuesto;

    //Salida de datos
    cout << endl;
    cout << "El total a pagar es de: " << total;

    return 0;
}
