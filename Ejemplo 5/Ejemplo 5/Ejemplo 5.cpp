// Ejemplo 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
// Registro 8 alumnos.cpp: define el punto de entrada de la aplicación de consola.
//

#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

double alum1[4] = { 3,4,1.5,5, }, alum2[4] = { 3.4 , 4.5 , 2.5 , 2.2 }, alum3[4] = { 2 ,2.2, 4.5, 5 }, alum4[4] = { 3.5 ,3.4 ,3.6 ,2.5 };
double alum5[4] = { 3.2,4.2,4.8,2 }, alum6[4] = { 3,1,1,3.5 }, alum7[4] = { 3.4,3,2,1 }, alum8[4] = { 3,4,6,5 };

double aux[8] = { 0,0,0,0,0,0,0,0 }; //Sumar las notas de cada estudiante
float prom = 0; //Promedio
float may, men; //Mayor y menor nota.

struct Alumnos
{
	//Tamaño de 10 se usan 9 y uno de caracter nulo.
	char nom1[10] = { "Andres   " }; char nom2[10] = { "Camila   " }; char nom3[10] = { "Juan     " }; char nom4[10] = { "Pedro    " };
	char nom5[10] = { "Carlos   " }; char nom6[10] = { "Daniela  " }; char nom7[10] = { "Alejandra" }; char nom8[10] = { "Luis     " };

};
void NotaEst1()
{
	aux[0] = (alum1[0] + alum1[1] + alum1[2] + alum1[3]) / 4;//Suma cad posicion del arreglo alum1 y lo guardo en un arreglo aux. en la posicion 0.
	cout << "         " << aux[0]; //Nota final que se guardo
	if (aux[0] >= 3.0)  //Si aprobo o no 
		cout << "         Si" << endl;
	else
		cout << "          No" << endl;
}
void NotaEst2()
{
	aux[1] = (alum2[0] + alum2[1] + alum2[2] + alum2[3]) / 4;
	cout << "       " << aux[1];
	if (aux[1] >= 3.0)
		cout << "          Si" << endl;
	else
		cout << "          No" << endl;
}
void NotaEst3()
{
	aux[2] = (alum3[0] + alum3[1] + alum3[2] + alum3[3]) / 4;
	cout << "         " << aux[2];
	if (aux[2] >= 3.0)
		cout << "         Si" << endl;
	else
		cout << "          No" << endl;
}
void NotaEst4()
{
	aux[3] = (alum4[0] + alum4[1] + alum4[2] + alum4[3]) / 4;
	cout << "       " << aux[3];
	if (aux[3] >= 3.0)
		cout << "          Si" << endl;
	else
		cout << "         No" << endl;
}
void NotaEst5()
{
	aux[4] = (alum5[0] + alum5[1] + alum5[2] + alum5[3]) / 4;
	cout << "         " << aux[4];
	if (aux[4] >= 3.0)
		cout << "          Si" << endl;
	else
		cout << "          No" << endl;
}
void NotaEst6()
{
	aux[5] = (alum6[0] + alum6[1] + alum6[2] + alum6[3]) / 4;
	cout << "       " << aux[5];
	if (aux[5] >= 3.0)
		cout << "         Si" << endl;
	else
		cout << "          No" << endl;
}
void NotaEst7()
{
	aux[6] = (alum7[0] + alum7[1] + alum7[2] + alum7[3]) / 4;
	cout << "         " << aux[6];
	if (aux[6] >= 3.0)
		cout << "          Si" << endl;
	else
		cout << "           No" << endl;
}
void NotaEst8()
{
	aux[7] = (alum8[0] + alum8[1] + alum8[2] + alum8[3]) / 4;
	cout << "         " << aux[7];
	if (aux[7] >= 3.0)
		cout << "             Si" << endl;
	else
		cout << "          No" << endl;
}


int main(int argc, char* argv[])
{
	Alumnos dat1; //Llamo la estructura y le asigno un nombre para usarla.

	cout << "\n\t   Tabla Calificaciones 8 Alumnos\n" << endl;
	cout << "Nombre     Corte 1   Corte 2   Corte 3    Corte 4  Nota Materia    Aprobo" << endl;

	//Llamo cada estructura,cada nota, y muestro la sentencia de las nota y aprobacion
	cout << (dat1.nom1) << "       " << alum1[0] << "        " << alum1[1] << "       " << alum1[2] << "        " << alum1[3]; NotaEst1();
	cout << (dat1.nom2) << "       " << alum2[0] << "      " << alum2[1] << "     " << alum2[2] << "        " << alum2[3]; NotaEst2();
	cout << (dat1.nom3) << "       " << alum3[0] << "        " << alum3[1] << "     " << alum3[2] << "        " << alum3[3]; NotaEst3();
	cout << (dat1.nom4) << "       " << alum4[0] << "      " << alum4[1] << "     " << alum4[2] << "        " << alum4[3]; NotaEst4();
	cout << (dat1.nom5) << "       " << alum5[0] << "      " << alum5[1] << "     " << alum5[2] << "        " << alum5[3]; NotaEst5();
	cout << (dat1.nom6) << "       " << alum6[0] << "        " << alum6[1] << "       " << alum6[2] << "          " << alum6[3]; NotaEst6();
	cout << (dat1.nom7) << "       " << alum7[0] << "      " << alum7[1] << "       " << alum7[2] << "          " << alum7[3]; NotaEst7();
	cout << (dat1.nom8) << "       " << alum8[0] << "        " << alum8[1] << "       " << alum8[2] << "          " << alum8[3]; NotaEst8();
	cout << endl;

	prom = (aux[0] + aux[1] + aux[2] + aux[3] + aux[4] + aux[5] + aux[6] + aux[7]) / 8; //llamo la nota final de cada alumno guardada en aux.
	may = aux[0]; //Para determinar el mayor o menor de las nota uso el arreglo donde la tengo guardadas en aux.
	men = aux[0];
	for (int i = 0; i < 8; i++) //Recorre las 8 notas.
	{

		if (aux[i] > may) //Pregunta si es la mayor de las anteriores.
		{
			may = aux[i]; //guarda el dato que es mayor 
		}
		if (aux[i] < men)
		{
			men = aux[i];
		}
	}

	cout << "\n  La nota Promedio: " << prom << endl;
	cout << "\n  La nota mayor es:" << may << endl;
	cout << "\n  La nota menor es:" << men << endl;



	system("PAUSE");
	return EXIT_SUCCESS;
}

