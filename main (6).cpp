/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
     // Declarar la variable para el número ingresado
    int numero; // declaro una variable de tipo entero

    // Solicita al usuario que ingrese un número entero
    cout << "Ingrese un número entero: ";
    cin >> numero; // guarda el numero que ingreso el usuario en la variable numero

    if (numero > 0) // si se cumple esta condicion se va a ejecutar lo que esta entre las llaves
    {
        cout << "El número es positivo." << endl; // si se cumplio la condicion mostrara el texto en la consola
    }
    else if (numero < 0) // si no se cumplio la condicion anterior pero si se cumple esta condicion se va a ejecutar lo que esta en estas llaves
    {
        cout << "El número es negativo." << endl; // si se cumple esta condicion mostrara el texto en la consola
    } 
    else // si no se cumple ninguna de las condiciones se ejecutara lo que esta en estas llaves 
    {
        cout << "El número es nulo (cero)." << endl; // si no se cumplio ningunas de las condiciones se mostrara el texto en la consola
    }


    return 0;
}
