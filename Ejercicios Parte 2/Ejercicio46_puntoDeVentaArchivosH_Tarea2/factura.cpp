#include <iostream>
#include "factura.h"

using namespace std;

double subtotal;
double impuesto = 0.15;
double total = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{

    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl; 

    cout <<"Productos: " << endl;
    cout << listaProductos;
    cout << endl;

    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;

    cout << "Impuesto a pagar 15%: " << subtotal * impuesto;
    cout << endl;
    cout << endl;

    total = subtotal + (subtotal * impuesto);

    cout << "Total a pagar: " << total;
    cout << endl;
    cout << endl;

    system("pause");

}