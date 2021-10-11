// IntroProgra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>

int main()
{
    /*Suma dos numeros, estos numeros pedirlos por teclado*/

//Declaracion de variables

    int iDato1;
    int iDato2;
    int iResultado;

    printf("\n ----- SUMA DE DATOS [DOS DATOS]-----\n");

    //LECTURA DE DATOS
    printf("Ingresa tu primer numero: ");
    scanf_s("%d", &iDato1); //entrada de datos tipo numerico por teclado Dato1

    printf("Ingresa tu segundo numero: ");
    scanf_s("%d", &iDato2); //entrada de datos tipo numerico por teclado Dato1

  //Operacion
    iResultado = iDato1 + iDato2;

    //Imprimir el resultado
    printf("El resultado de la suma es: %d", iResultado);

    return 0;
}

