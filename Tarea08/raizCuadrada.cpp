#include <iostream>
#include <math.h>

using namespace std;

float raizCuadrada(float numero)
{

    return sqrt(numero);
}

int main(int argc, char const *argv[])
{
    float numeroUsado = 0;

    system("cls");
    cout << "************************" << endl;
    cout << "CALCULO DE RAIZ CUADRADA" << endl;
    cout << "************************" << endl << endl;

    cout << "Ingrese el numero que desea calcular su raiz cuadrada: ";
    cin >> numeroUsado;

    cout << endl << endl;
    cout << "La raiz cuadrada de " << numeroUsado <<  " es de: " <<  raizCuadrada(numeroUsado);
    cout << endl;
    system("pause");
    return 0;
}
