// Ejemplo 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct DatosAlmacen //Creamos nuestra 1a estructura para el Almacen
{
	char Nombre[30]; // Algunos datos importantes o relevantes de una almacen
	char Dir1[30], Dir2[30], Dir3[30], Dir4[30];//En este caso  nombre,Direcion,ciudad y telefono
	char ciudad[30];
	int  telefono;

};
struct DatosProveedor //Creamos nuestra 2da estrcutura para el proveedor
{
	int long  codigo, telefono;
	char Nombre[30], contacto1[30], contacto2[30];
	char email[30];
	char Dir5[30], Dir6[30], Dir7[30], Dir8[30];

};
struct DatosVendedor //Creamos nuestra 3era estructura para el vendedor
{
	char Nombre1[30], Nombre2[30], Ap1[30], Ap2[30];
	int cedula;
	char Cargo[30];
	int telefono;
	int nit;
};

int main()
{
	//Damos un nombre a cada una de nuestras estrcutura para luego llamarlas a uso.
	DatosAlmacen Almacen; DatosProveedor Proveedor;	DatosVendedor Vendedor;

	cout << "\t\t""INFORMACION ACERCA DEL ALMACEN VENDEMAX""\n" << endl;//Titulo de nuestro programa.
	cout << "\t\t" << endl; //Espacio para una mejor visualiazación.
	//Empezamos usando nuestra 1era estructura para almacen.
	cout << "\t""Datos del Almacen:""\n" << endl;
	//Al igual que en otras ocaciones se piden los datos de igual forma 
	//Se nombra la estrcutura con el nombre que hemos dado anteriormente,seguido de un punto,y el dato que queremos tomar de esa estructura.
	cout << "Nombre con el cual esta registrado: ", cin >> (Almacen.Nombre);//Hacemos eso con cada uno de lo datos que queremos tomar 
	cout << "Ubicacion Del Almacen:(Carrera # Calle o Av#)  ", cin >> (Almacen.Dir1), cin >> (Almacen.Dir2), cin >> (Almacen.Dir3), cin >> (Almacen.Dir4);
	cout << "Ciudad Donde esta ubicado el Almacen: ", cin >> (Almacen.ciudad);//Hacemos eso con cada uno de lo datos que queremos tomar 
	cout << "Telefono fijo: ", cin >> (Almacen.telefono);
	cout << "\t\t" << endl;//Espacio para una mejor visualización.

	cout << "\t\"Datos Del Proveedor:""\n" << endl;//Aqui empezamos con nuestra 2da estructura.
	cout << "Codigo: ", cin >> (Proveedor.codigo);//Llamamos nuestra estrcutura que queremos tomar.
	cout << "Primer Nombre :", cin >> (Proveedor.Nombre);//Luego el dato dentro de esta estrcutura que queremos llenar o usar
	cout << "Apellidos: ", cin >> (Proveedor.contacto1), cin >> (Proveedor.contacto2);
	cout << "e-mail: ", cin >> (Proveedor.email);
	cout << "Direccion o Punto de Distribucion: ", cin >> (Proveedor.Dir5), cin >> (Proveedor.Dir6), cin >> (Proveedor.Dir7), cin >> (Proveedor.Dir8);
	cout << "\t\t" << endl;

	cout << "\t""Datos Del Vendedor:""\n" << endl;//Nuestra 3era estructura de vendedor
	cout << "Nombre (Nombre y Apellido) : ", cin >> (Vendedor.Nombre1), cin >> (Vendedor.Nombre2);
	cout << "Telefono Fijo: ", cin >> (Vendedor.telefono);//como hemos hecho con los anteriores datos nombramos la estructura y el dato que usaremos de esta.
	cout << "Cedula:", cin >> (Vendedor.cedula);
	cout << "Codigo: ", cin >> (Vendedor.nit);
	cout << "Cargo: ", cin >> (Vendedor.Cargo);
	cout << "\t\t" << endl;

	system("cls");//Limpiamos la pantalla para luego de [ENTER] mostrar los datos que hemos otorgado a cada una de nuestras estructuras.

	cout << "\n""\t""Base de Datos Actualizada""\n" << endl;//Un Titulo nuevo para nuestra nueva pantalla a mostrar.

	cout << "\t""Datos del Almacen:""\n" << endl;
	cout << "Nombre: " << (Almacen.Nombre) << endl;//Para mostrar la informacion almacenada se hace de igual que hemos hecho antes
	cout << "Ubicacion: " << (Almacen.Dir1) << " " << (Almacen.Dir2) << " " << (Almacen.Dir3) << " " << (Almacen.Dir4) << endl;
	cout << "Ciudad: " << (Almacen.ciudad) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "Telefono fijo: " << (Almacen.telefono) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "\t\t" << endl;

	cout << "\t""Datos Del Proveedor:""\n" << endl;
	cout << "Codigo: " << (Proveedor.codigo) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "Nombre :" << (Proveedor.Nombre) << " " << (Proveedor.contacto1) << " " << (Proveedor.contacto2) << endl;
	cout << "e-mail: " << (Proveedor.email) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "Punto de Distribucion: " << (Proveedor.Dir5) << " " << (Proveedor.Dir6) << " " << (Proveedor.Dir7) << " " << (Proveedor.Dir8) << endl;
	cout << "\t\t" << endl;

	cout << "\t""Datos Del Vendedor:""\n" << endl;
	cout << "Nombre: " << (Vendedor.Nombre1) << " " << (Vendedor.Nombre2) << endl;
	cout << "Telefono Fijo: " << (Vendedor.telefono) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "Cedula:" << (Vendedor.cedula) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "Codigo: " << (Vendedor.nit) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "Cargo: " << (Vendedor.Cargo) << endl;//Nombramos la estrcutura donde esta nuestro dato guardado seguido de punto el nombre del dato
	cout << "\t\t" << endl;




	system("PAUSE");
	return EXIT_SUCCESS;
}


