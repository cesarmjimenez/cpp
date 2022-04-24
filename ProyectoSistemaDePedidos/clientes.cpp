#include <iostream>

using namespace std;

string clientes[10][4]
{
    {"Jose", "Martinez", "98989898", "mJose@gmail.com"},
    {"Ana", "Guzman", "97542233", "gAna@gmail.com"},
    {"Edgardo", "Caballero", "33201929", "cEdgardo@gmail.com"},
    {"Alejandro", "Jimenez", "99293453", "jAlejandro@gmail.com"},
    {"Nefi", "Bardales", "32154435", "bNefi@gmail.com"},
    {"", "", "", ""},
    {"", "", "", ""},
    {"", "", "", ""},
    {"", "", "", ""},
    {"", "", "", ""},
};

int clientesActuales = 5;
int conteoClientes = 5;

void agregarClientes()
{
    system ("cls");
    cout << "********************************" << endl;
    cout << "* Ingreso de datos del Cliente *" << endl;
    cout << "********************************" << endl << endl;

    cout << "Ingrese el nombre del cliente: ";
    cin >> clientes[conteoClientes][0];
    cout << endl;
    cout << "Ingrese el apellido del cliente: ";
    cin >> clientes[conteoClientes][1];
    cout << endl;
    cout << "Ingrese el numero de telefono del cliente: ";
    cin >> clientes[conteoClientes][2];
    cout << endl;
    cout << "Ingrese el correo electronico del cliente: ";
    cin >> clientes[conteoClientes][3];
    cout << endl << endl;
    cout << "Datos ingresados correctamente" << endl;
    clientesActuales++;
    conteoClientes++;
    system("pause");
    system("cls");
}

void mostrarClientes()
{
    cout << "*********************" << endl;
    cout << "* Lista de Clientes *" << endl;
    cout << "*********************" << endl << endl;
    for (int i = 0; i < clientesActuales; i++)
    {
        cout << "Datos cliente No: " << i + 1 << endl;
        cout << "*******************" << endl;
        cout << "Nombre: " << clientes[i][0] << endl;
        cout << "Apellido: " << clientes[i][1] << endl;
        cout << "Numero De Telefono: " << clientes[i][2] << endl;
        cout << "Correo Electronico: " << clientes[i][3] << endl;
        cout << endl;
    }
    system("pause");
}