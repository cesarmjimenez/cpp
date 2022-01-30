#include <iostream>

using namespace std;

int main(int argc, char** argv){

    //Declaracion de variables
    int a = 0;
    int b = 0;
    int ResultadoSuma = 0;
    int ResultadoResta = 0;
    int ResultadoMultiplicacion = 0;
    int ResultadoDivision = 0;

    //Ingreso de datos
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    //Proceso de datos
    ResultadoSuma = a + b;
    ResultadoResta = a - b;
    ResultadoMultiplicacion = a * b;
    ResultadoDivision = a / b;

    //Salida de datos
    cout << "El resultado de la suma de a y b es de: " << ResultadoSuma << endl << endl;
    cout << "El resultado de la resta de a y b es de: " << ResultadoResta << endl << endl;
    cout << "El resultado de la multiplicacion de a y b es de: " << ResultadoMultiplicacion << endl << endl;
    cout << "El resultado de la division de a y b es de: " << ResultadoDivision << endl << endl;

    return 0;
}