#include <iostream>

using namespace std;

int main()
{
    char x = 'a'; // Declaramos y asignamos valor a la variable en la misma línea

    int num; //Declaramos una variable de tipo entero 
    num = 5; //Le asignamos un valor a la variable

    int num2 = 8; //declaración de variable y asignación de valor al mismo tiempo

    float numero; // declaracion de tipo de variable decimal
    numero = 3.5; //Le asignamos un valor al decimal

    float resultado = numero + num2; //Sumamos dos variables y las asignamos a resultado
    //3.5 + 8 = 11.5

    resultado = resultado + num; //Al valor actual de resultado le sumamos el valor de num
    //11.5 + 5 = 16.5

    bool valor = false; //Variable booleana
    valor = true; // Pueden ser true o false


    float resultado_2 = resultado*2; //Duplicamos el valor de resultado 16.5*2 = 33

    cout << "El resultado es:" << resultado_2 << endl; //Mostramos el valor de resultado por pantalla

    return 0;
}