#include <iostream>

using namespace std;

extern void agregarClientes();
extern void comida();
extern void licores();
extern void medicamento();
extern void superMercado();
extern void defImpuestoDeEnvio(int distancia);

void tiendas()
{
    int opcion = 0;
    int distancia = 0;

    agregarClientes();

    system("cls");
    cout << "A que distancia se hara el envio (Metros): ";
    cin >> distancia;
    defImpuestoDeEnvio(distancia);
    cout << endl;
    cout << "Distancia del pedido guardada" << endl;
    system("pause");

    while (true)
    {
        system ("cls");

        cout << "\t   ******************" << endl;
        cout << "\t   *  MENU PEDIDOS  *" << endl;
        cout << "\t   ******************" << endl;
        cout << endl << endl << endl;

        cout << "1. - Pedido De Comida" << endl;
        cout << "2. - Pedido De Licores" << endl;
        cout << "3. - Pedido De Medicamentos" << endl;
        cout << "4. - Pedido De Super Mercado" << endl;
        cout << "0. - Salir" << endl;
        
        cout << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 0){
        break;
        }
        if (opcion == 1)
        {
            comida();
        } 
        else if (opcion == 2) 
        {
            licores();
        } 
        else if (opcion == 3) 
        {
            medicamento();
        }
        else if (opcion == 4) 
        {
            superMercado();
        }
    }
}
