#include <iostream>

using namespace std;

double subtotal;
double impuesto = 0.15;
double impuestoEnvio = 0;
double total = 0;
string listaProductos;


void defImpuestoDeEnvio(int distancia)
{

    if (distancia <= 10)
    {
        impuestoEnvio = 0.05;
    }
    else if (distancia > 11 && distancia <= 50)
    {
        impuestoEnvio = 0.1;
    }
    else if (distancia > 51 && distancia <= 100)
    {
        impuestoEnvio = 0.15;
    }
    else if (distancia > 101)
    {
        impuestoEnvio = 0.2;
    }
    
}

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

    cout << "Impuesto Por el envio: " << subtotal * impuestoEnvio;
    cout << endl;
    cout << endl;

    total = subtotal + (subtotal * impuesto) + (subtotal * impuestoEnvio);

    cout << "Total a pagar: L. " << total;
    cout << endl;
    cout << endl;

    system("pause");

}