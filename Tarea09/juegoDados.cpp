#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int primerDado(int dadoN1)
{
    return dadoN1 = rand() % 6 + 1;
}

int segundoDado(int dadoN2)
{
    return dadoN2 = rand() % 6 + 1;
}

int main(int argc, char const *argv[])
{
    int dadoN1 = 0;
    int dadoN2 = 0;
    char entrada = 's';
    char salida = 's';

    srand(time(NULL));
    system("cls");

    cout << "XXXXXXXXXXXXXX" << endl;
    cout << "Juego de dados" << endl;
    cout << "XXXXXXXXXXXXXX" << endl;

    cout << endl;

    cout << "Desea comenzar un juego de dados?" << endl;
    cout << "(S para si, N para no): ";
    cin >> entrada;
    cout << endl;

    while (true)
    {
        if (entrada == 's' || entrada == 'S')
        {
            while (true)
            {
                if (salida == 's' || salida == 'S')
                {
                    cout << "El valor del primer dado es de: " << primerDado(dadoN1);
                    cout << endl;

                    cout << "El valor del segundo dado es de: " << segundoDado(dadoN2);
                    cout << endl;

                    cout << endl;
                    cout << "Desea tirar nuevamente los dados?" << endl;
                    cout << "(S para si, N para no): ";
                    cin >> salida;
                    system("cls");
                }
                else if (salida == 'n' || salida == 'N')
                {
                    cout << "Hasta la proxima!" << endl;
                    system("pause");
                    return 0;
                }
                else
                {
                    cout << "Opcion invalida" << endl;
                    cout << "Desea tirar nuevamente los dados?" << endl;
                    cout << "(S para si, N para no): ";
                    cin >> salida;
                    system("cls");

                }
                
            }
        }
        else if(entrada == 'n' || entrada == 'N')
        {
            break;
        }
        else
        {
            cout << "Opcion invalida" << endl;
            cout << "Desea comenzar un juego de dados?" << endl;
            cout << "(S para si, N para no): ";
            cin >> entrada;
            system("cls");

        }
    }

    cout << "Hasta la proxima!" << endl;
    system("pause");

    return 0;
}
    