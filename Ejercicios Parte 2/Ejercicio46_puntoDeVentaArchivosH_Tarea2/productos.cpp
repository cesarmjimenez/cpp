#include <iostream>
#include "productos.h"
#include "factura.h"

using namespace std;

void productos(int opcion)
{
    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Chocolate Caliente" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;
        
        case 3:
            agregarProducto("1 Chocolate Caliente - L 25.00", 1, 25);
            break;
        
        default:
            {
                cout << "opcion no valida" << endl << endl;
                system("pause");
                return;
                break;
            }
        
        }

        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system("pause");

        break;
    }

    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Granita de Cafe" << endl;
        cout << "2 - Limonada" << endl;
        cout << "3 - Refresco" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Granita de Cafe - L 50.00", 1, 50);
            break;
        
        case 2:
            agregarProducto("1 Limonada - L 20.00", 1, 20);
            break;
        
        case 3:
            agregarProducto("1 Refresco - L 20.00", 1, 20);
            break;
        
        default:
            {
                cout << "opcion no valida" << endl << endl;
                system("pause");
                return;
                break;
            }
        
        }
        
        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system ("pause");

        break;
    }

    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "*************" << endl;
        cout << "1 - Pastel Frio" << endl;
        cout << "2 - Pastel 3 Leches" << endl;
        cout << "3 - Orden de Cupcakes" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Pastel Frio - L 200.00", 1, 200);
            break;
        
        case 2:
            agregarProducto("1 Pastel 3 Leches - L 300.00", 1, 300);
            break;
        
        case 3:
            agregarProducto("1 Orden de Cupcakes - L 150.00", 1, 150);
            break;
        
        default:
            {
                cout << "opcion no valida" << endl << endl;
                system("pause");
                return;
                break;
            }
        
        }
        
        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system ("pause");
        
        break;
    }
    
    default:
        break;
    }
}