#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void comida()
{
    system("cls");
    int opcionProducto = 0;

    cout << "\t   ******************" << endl;
    cout << "\t   * PEDIDOS COMIDA *" << endl;
    cout << "\t   ******************" << endl;
    cout << "1 - Pollo Frito con Tajadas - L 70.00" << endl;
    cout << "2 - Chuleta asada con Arroz - L 90.00" << endl;
    cout << "3 - Caja de Pizza - L 100.00" << endl;
    cout << "4 - Orden de Hamburguesas - L 80.00" << endl;
    cout << "5 - Orden de Deditos de Pollo - L 100.00" << endl;
    cout << "6 - Refresco Coca Cola - L 40.00" << endl;
    cout << "7 - Refresco Pepsi - L 35.00" << endl;
    cout << "8 - Refresco Natural - L 20.00" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("1 Pollo Frito con Tajadas - L 70.00", 1, 70);
        break;

    case 2:
        agregarProducto("1 Chuleta Asada con Arroz - L 90.00", 1, 90);
        break;
    
    case 3:
        agregarProducto("1 Caja de Pizza - L 100.00", 1, 100);
        break;
    
    case 4:
        agregarProducto("1 Orden de Hamburguesa - L 80.00", 1, 80);
        break;
    
    case 5:
        agregarProducto("1 Orden de Deditos de Pollo - L 100.00", 1, 100);
        break;
    
    case 6:
        agregarProducto("1 Refresco Coca Cola - L 40.00", 1, 40);
        break;
    
    case 7:
        agregarProducto("1 Refresco Pepsi - L 35.00", 1, 35);
        break;
    
    case 8:
        agregarProducto("1 Refresco Natural - L 20.00", 1, 20);
        break;
    
    default:
        {
            cout << "opcion no valida" << endl << endl;
            system("pause");
            return;
            break;
        }
    }
}

void licores()
{
    system("cls");
    int opcionProducto = 0;

    cout << "\t   *******************" << endl;
    cout << "\t   * PEDIDOS LICORES *" << endl;
    cout << "\t   *******************" << endl;
    cout << "1 - Botella de Ron - L 200.00" << endl;
    cout << "2 - Botella de Tequila - L 400.00" << endl;
    cout << "3 - Botella de Vodka - L 350.00" << endl;
    cout << "4 - Botella de Jagger - L 550.00" << endl;
    cout << "5 - Botella de Vino - L 450.00" << endl;
    cout << "6 - Sixpack de Cerveza - L 250.00" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("1 Botella de Ron - L 200.00", 1, 200);
        break;

    case 2:
        agregarProducto("1 Botella de Tequila - L 400.00", 1, 400);
        break;
    
    case 3:
        agregarProducto("1 Botella de Vodka - L 350.00", 1, 350);
        break;
    
    case 4:
        agregarProducto("1 Botella de Jagger - L 550.00", 1, 550);
        break;
    
    case 5:
        agregarProducto("1 Botella de Vino - L 450.00", 1, 450);
        break;
    
    case 6:
        agregarProducto("1 Sixpack de Cerveza - L 250.00", 1, 250);
        break;
    
    default:
        {
            cout << "opcion no valida" << endl << endl;
            system("pause");
            return;
            break;
        }
    }
}

void medicamento()
{
    system("cls");
    int opcionProducto = 0;

    cout << "\t   ************************" << endl;
    cout << "\t   * PEDIDOS MEDICAMENTOS *" << endl;
    cout << "\t   ************************" << endl;
    cout << "1 - Lamina de Acetaminofen - L 20.00" << endl;
    cout << "2 - Lamina de Panadol - L 35.00" << endl;
    cout << "3 - Lamina de Amoxicilina - L 30.00" << endl;
    cout << "4 - Lamina de Vitaminas - L 50.00" << endl;
    cout << "5 - Sobre de Alka Seltzer - L 25.00" << endl;
    cout << "6 - Sobre de Sudagrip - L 20" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("1 Lamina de Acetaminofen - L 20.00", 1, 20);
        break;

    case 2:
        agregarProducto("1 Lamina de Panadol - L 35.00", 1, 35);
        break;
    
    case 3:
        agregarProducto("1 Lamina de Amoxicilina - L 30.00", 1, 30);
        break;
    
    case 4:
        agregarProducto("1 Lamina de Vitaminas - L 50.00", 1, 50);
        break;
    
    case 5:
        agregarProducto("1 Sobre de Alka Seltzer - L 25.00", 1, 25);
        break;
    
    case 6:
        agregarProducto("1 Sobre de Sudagrip - L 20.00", 1, 20);
        break;
    
    default:
        {
            cout << "opcion no valida" << endl << endl;
            system("pause");
            return;
            break;
        }
    }
}

void superMercado()
{
        system("cls");
    int opcionProducto = 0;

    cout << "\t   *************************" << endl;
    cout << "\t   * PEDIDOS SUPER MERCADO *" << endl;
    cout << "\t   *************************" << endl;
    cout << "1 - Saco de Arroz - L 200.00" << endl;
    cout << "2 - Saco de Maseca - L 250.00" << endl;
    cout << "3 - Caja de cereal - L 100.00" << endl;
    cout << "4 - Galon de leche - L 80.00" << endl;
    cout << "5 - Libra Carne de Res - L 75.00" << endl;
    cout << "6 - Libra Carne de Cerdo - L 85" << endl;
    cout << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcionProducto;
    
    switch (opcionProducto)
    {
    case 1:
        agregarProducto("1 Saco de Arroz - L 200.00", 1, 200);
        break;

    case 2:
        agregarProducto("1 Saco de Maseca - L 250.00", 1, 250);
        break;
    
    case 3:
        agregarProducto("1 Caja de cereal - L 100.00", 1, 100);
        break;
    
    case 4:
        agregarProducto("1 Galon de leche - L 80.00", 1, 80);
        break;
    
    case 5:
        agregarProducto("1 Libra Carne de Res - L 75.00", 1, 75);
        break;
    
    case 6:
        agregarProducto("1 Libra Carne de Cerdo - L 85", 1, 85);
        break;
    
    default:
        {
            cout << "opcion no valida" << endl << endl;
            system("pause");
            return;
            break;
        }
    }
}
