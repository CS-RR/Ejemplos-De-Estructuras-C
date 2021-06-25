// Ejemplo 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct DatosEmpresa //Creamos nuestra 1era estructura para Empresa
{
	char Nombre[30], nombre2[30], nombre3[30];
	char Dir[30], Dir2[30], Dir3[30], Dir4[30];
	int long telefono;//Creamos nuestros datos necesarios para luego ser usados
	char ciudad[30];
};
struct DatosEmpleado//creamos nuestra 2da estructura para Empleado
{
	char nombre[30], nombre2[30], nombre3[30], nombre4[30];
	int cedula;
	int long telefono;//Creamos nuestro datos necesarios para ser usados 
	char cargo[30];

};

int x, sub, total, total2;
int main()
{
	//Le damos nombre a nuestras estructuras para ser empleadas mas adelante al pedir y dar datos.
	DatosEmpresa Empresa; DatosEmpleado Empleado;

	cout << "\t\t""Industrias Monster Inc." << endl;//Titulo o nombre de nuestro programa.
	cout << "\t\t" << endl; //Espacios para una mejor visualización.
	cout << "A continuacion debera proporcionar cierta informacion:""\n" << endl;//se informa que se pediran datos 
	cout << ".................................." << endl;
	cout << "\t""Datos Sobre la Empresa" << endl;//Se empieza por datos de la empresa
	cout << ".................................." << endl;//Para una mejor visualización.
	cout << "\t\t" << endl;//Espacios para una mejor visualización
	//Se empieza con el nombre de la empresa para esto llamamos nuestra estructura empresa y luego el dato que queremos de esta.
	cout << "Nombre de la Empresa: ", cin >> (Empresa.Nombre), cin >> (Empresa.nombre2), cin >> (Empresa.nombre3);//Siempre se hace igual el nombre de la estrcutura seguido de punto y luego el dato que queremos de esta.
	cout << "Direccion de la Empresa(Cr#,Av o Cll #): ", cin >> (Empresa.Dir), cin >> (Empresa.Dir2), cin >> (Empresa.Dir3), cin >> (Empresa.Dir4);
	cout << "Telefono Fijo: ", cin >> (Empresa.telefono);//Siempre se hace igual el nombre de la estrcutura seguido de punto y luego el dato que queremos de esta.
	cout << "Ciudad: ", cin >> (Empresa.ciudad);//Siempre se hace igual el nombre de la estrcutura seguido de punto y luego el dato que queremos de esta.
	cout << "\t\t" << endl;

	cout << ".................................." << endl;//Para una mejor visualización.
	//Pedimos los datos para la estructura 2.
	cout << "\t""Datos Del Empleado" << endl;
	cout << ".................................." << endl;//Para una mejor visualización.
	cout << "Nombre Completo: ", cin >> (Empleado.nombre), cin >> (Empleado.nombre2), cin >> (Empleado.nombre3), cin >> (Empleado.nombre4);
	cout << "Numero Cedula: ", cin >> (Empleado.cedula);//Siempre se hace igual el nombre de la estrcutura seguido de punto y luego el dato que queremos de esta.
	cout << "Telefono fijo: ", cin >> (Empleado.telefono);//Siempre se hace igual el nombre de la estrcutura seguido de punto y luego el dato que queremos de esta.
	cout << "Cargo Empleado: ", cin >> (Empleado.cargo);

	system("cls");//Borramos nuestra pantalla para mostrar una nueva
	//En Esta nueva daremos nuestra informacion acerca del salario del empleado.

	cout << "\t\t""Informacion acerca del pago al empleado:""\n" << endl;
	cout << "Salario a Pagar: ", cin >> x;//Pedidmos el salario de nuestro empleado estrella.
	cout << "\t\t" << endl;
	cout << "Subsidio transporte: ", cin >> sub;//Y Damos el valor del subsidio de tranporter que queramos.
	cout << "\t\t";
	{
		int total = (x + sub);
		total2 = total;// Calculo del salario total a pagar 
	}

	system("cls");//Nuevamente borramos nuestra pantalla para mostrar toda la informacion junta.

	cout << "\t""Informacion Del empleado y la Empresa donde labora""\n" << endl;
	cout << "Nombre Empresa: " << (Empresa.Nombre) << " " << (Empresa.nombre2) << " " << (Empresa.nombre3) << endl;//Mostramos la informacion dado anteriormente siguiendo la misma estructura de edición.
	cout << "Direccion: " << (Empresa.Dir) << " " << (Empresa.Dir2) << " " << (Empresa.Dir3) << " " << (Empresa.Dir4) << endl;
	cout << "Telefono: " << (Empresa.telefono) << endl;//Mostramos la informacion dado anteriormente siguiendo la misma estructura de edición.
	cout << "Ciudad: " << (Empresa.ciudad) << endl;
	cout << "\t\t" << endl;
	cout << "..........Empleado.........." << endl;
	cout << "Nombre Completo: " << (Empleado.nombre) << " " << (Empleado.nombre2) << " " << (Empleado.nombre3) << " " << (Empleado.nombre4) << endl;
	cout << "Numero Cedula: " << (Empleado.cedula) << endl;//Para mostrar  de igual forma el nombre de la estrcutura seguido de punto y luego el dato que queremos de esta.
	cout << "Telefono fijo: " << (Empleado.telefono) << endl;//Para mostrar  informacion de igual forma el nombre de la estrcutura seguido de punto y luego el dato que queremos de esta.
	cout << "Cargo Empleado: " << (Empleado.cargo) << endl;
	cout << "\t\t" << endl;
	cout << "Salario :" << x << endl;//Se muestra el valor dado anteriormente.
	cout << "subsidio: " << sub << endl;//Se muestra igual  el valor dado anteriormente.
	cout << "Total a Pagar: " << total2 << endl;// Se muestra el total a pagar.
	cout << "\t\t" << endl;


	system("PAUSE");
	return EXIT_SUCCESS;
}


