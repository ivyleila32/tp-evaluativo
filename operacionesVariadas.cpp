#include <iostream>
#include "operacionesVariadas.hpp"
#include "utilidades.hpp"

using namespace std;

void convertirNumeroADia()
{
    clearConsole();

    int dia;

    cout << "\tIngrese el numero de dia: ";
    cin >> dia;

    switch(dia)
    {
        case 1:
            cout << "\tLunes" << endl;
            break;

        case 2:
            cout << "\tMartes" << endl;
            break;

        case 3:
            cout << "\tMiercoles" << endl;
            break;

        case 4:
            cout << "\tJueves" << endl;
            break;

        case 5:
            cout << "\tViernes" << endl;
            break;

        case 6:
            cout << "\tSabado" << endl;
            break;

        case 7:
            cout << "\tDomingo" << endl;
            break;
    }

    pauseConsole();
}

void sumarPrimerosNumeros()
{
    clearConsole();

    int n;
    int suma;

    cout << "\tIngrese numero n: ";
    cin >> n;

    suma = n * (n + 1) / 2;

    cout << "\tResultado: " << suma << endl;

    pauseConsole();
}

void factorial()
{
    clearConsole();

    int numero;
    int i;
    float fact = 1;

    cout << "\tIngrese numero: ";
    cin >> numero;

    for(i = 1; i <= numero; i++)
    {
        fact *= i;
    }

    cout << "\tFactorial: " << fact << endl;

    pauseConsole();
}

void invertirNumero4Cifras()
{
    clearConsole();

    int nume;
    int u, d, c, um;
    int a, b;
    int resultado;

    cout << "\tIngrese numero de 4 cifras: ";
    cin >> nume;

    um = nume / 1000;
    a = nume / 100;
    c = a % 10;
    b = nume / 10;
    d = b % 10;
    u = nume % 10;

    resultado = u * 1000 + d * 100 + c * 10 + um;

    cout << "\tNumero invertido: " << resultado << endl;

    pauseConsole();
}