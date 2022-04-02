#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int calculadorda(int a, int b, char operador)
{
    if (operador == '+'){
        return suma(a, b);
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    system("cls");

    int n1 = 0;
    int n2 = 0;
    char operador;

    cout << "Ingrese a: ";
    cin >> n1;
    cout << "Ingrese b: ";
    cin >> n2;
    cout << "Ingrese el operador (+, -, *, / ): ";
    cin >> operador;

    cout << endl;

    cout << "Resultado de " << n1 << operador << n2 << " es: ";
    cout << calculadorda(n1, n2, operador);

    return 0;
}