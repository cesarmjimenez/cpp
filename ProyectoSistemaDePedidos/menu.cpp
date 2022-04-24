#include <iostream>

using namespace std;

extern void tiendas();
extern void mostrarClientes();
extern void imprimirFactura();

void menu()
{

    int opcion = 0;

    while (true)
    {
        system ("cls");

        cout << "\t***************************" << endl;
        cout << "\t*  Pedidos Mind Ki Power  *" << endl;
        cout << "\t***************************" << endl;
        cout << endl;
        cout << endl;
        cout << "\t   ********************" << endl;
        cout << "\t   *  MENU PRINCIPAL  *" << endl;
        cout << "\t   ********************" << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1. - Realizar Pedido" << endl;
        cout << "2. - Clientes" << endl;
        cout << "3. - Factura" << endl;
        cout << "0. - Salir" << endl;
        
        cout << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 0){
            break;
        }
        if (opcion == 1)
        {
            tiendas();
        }else if(opcion == 2)
        {
            mostrarClientes();
        }else if (opcion == 3) 
        {
            imprimirFactura();
        }
        

    }

}