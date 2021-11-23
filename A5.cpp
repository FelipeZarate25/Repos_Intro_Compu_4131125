// Asignacion5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>


int main()
{
	//Variables de entrada.
	int NumAlumno;
	int numPas, numComp, aux;
	int i;

	//Para saber cuantos datos insertar.
	scanf_s("%i", &NumAlumno);

	int arr_num[2000]; float arr_calif[2000];

	//Aqui es el ordenamiento.
	for (i = 0; i < NumAlumno ; i++)
	{
		scanf_s("%i %f", &arr_num[i], &arr_calif[i]);

		for (numPas = 0; i < numPas ; numPas ++){

			for (numComp = 0; numComp < NumAlumno ; numComp++) {

				if (arr_calif[numComp] > arr_calif[numComp + 1])

					aux = arr_calif[numComp + 1];
				arr_calif[numComp + 1] = arr_calif[numComp];
				arr_calif[numComp] = aux;

			}

		}
	}
	for (numComp = 0; numComp < NumAlumno; numComp++) {
		
		printf("%i %f\n", arr_num[NumAlumno], arr_calif[numComp]);
	}
	return 0;
}
