// Ejemplo 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct DatosConcesionario //Creamos nuestra 1a estructura para el concesionario
{
	char Nombre[30]; //Agregamos nuestras variables para ser usadas mas adelante.
	char Dir1[30], Dir3[30];
	int Dir2, Dir4;
	char Ciudad[30];
	int long  Telefono;

};
struct DatosVehiculo //Creamos nuestra 2da Estructura Para Vehiculo
{
	char Marca[30];// Creamos las variables necesarias que usaremos dentro de esta estructura 
	char Modelo[30];
	char Color[30];
	char Tipo[30];
};
struct DatosPersonales //Nuestra 3ra Estructura para los datos del conductor o propietario del vehiculo
{
	char Nombre1[30], Nombre2[30];//De igual forma creamos las variables que usaremos 
	char Apellido1[30], Apellido2[30];
	int edad;
	int cedula;
	int long telefono;
};

int main()
{
	DatosConcesionario concesionario; // Le Damos un nombre a nuestra estructura para luego usarla mas adelante.
	DatosVehiculo      Vehiculo; // Le Damos un nombre a nuestra estructura para luego usarla mas adelante.
	DatosPersonales    Cliente; // Le Damos un nombre a nuestra estructura para luego usarla mas adelante.

	cout << "\t\t""Bienvido a su asistente para compra de Vehiculo""\n" << endl; //Nombre Del Programa
	cout << "Llenar los siguiente datos para ingresarlos al sistema:" << endl;//Le indicamos al usuario que llene los siguiente datos 
	cout << ".......................................................""\n" << endl;
	cout << "\t""Datos Concesionario""\n" << endl;//Aqui llenaremos datos para nuestro consecionario.
	cout << "Nombre Del Concesionario: ", cin >> (concesionario.Nombre);
	//Para esto llamamos a nuestra 1 estrcutura por su nombre y luego el dato que queremos tomar de esta.
	//Asi mismo hacemos para los siguientes datos que se piden.1ero se llama a la estructura en este caso consecionario luego punto y el dato que queremos tomar.
	cout << "Direccion (Carrera # Calle #): ", cin >> (concesionario.Dir1), cin >> (concesionario.Dir2), cin >> (concesionario.Dir3), cin >> (concesionario.Dir4);
	cout << "Ciudad: ", cin >> (concesionario.Ciudad);
	cout << "Telefono: ", cin >> (concesionario.Telefono);

	//Hacemos lo mismo para cada estructura y de igual forma
	//1ero se llama la estrcutura vehiculo luego punto y por ultimo el dato que queremos tomar de esa estructura.
	cout << "\t""Datos Del Vehiculo:""\n" << endl;
	cout << "Marca: ", cin >> (Vehiculo.Marca); //Aqui hemos pedido la marca de nuestro vehiculo.(NombreEstrcutura.PUNTO.Dato).
	cout << "Modelo: ", cin >> (Vehiculo.Modelo);
	cout << "Tipo: ", cin >> (Vehiculo.Tipo);
	cout << "Color: ", cin >> (Vehiculo.Color);
	//1ero se llama la estrcutura Propietario luego punto y por ultimo el dato que queremos tomar de esa estructura.
	cout << "\t""Datos Del Propietario:""\n" << endl;
	cout << "Nombre: ", cin >> (Cliente.Nombre1), cin >> (Cliente.Nombre2), cin >> (Cliente.Apellido1), cin >> (Cliente.Apellido2);
	cout << "Edad: ", cin >> (Cliente.edad);
	cout << "Numero De Cedula: ", cin >> (Cliente.cedula);
	cout << "Telefono: ", cin >> (Cliente.telefono);

	system("cls"); //Con esto hacemos un barrido de pantalla en nuestro programa para mostrar la informacion que hemos registrado

	//Para mostrar la informacio registrada  lo debemos hacer de igual forma como la pediamos
	cout << "\t""Los Datos ingresados son:""\n" << endl;
	cout << "..........Datos Concesionario..........""\n" << endl;
	cout << "Nombre Del Concesionario: " << (concesionario.Nombre) << endl;//Aqui mostraremos  la informacion del consesionario.
	//Para esto ponemos el nombre que lleva y luego nuestra estructura (Consesionario.Dir1) para mostra la direcion que hemos administrado.
	cout << "Direccion: " << (concesionario.Dir1) << " " << (concesionario.Dir2) << " " << (concesionario.Dir3) << " " << (concesionario.Dir4) << endl;
	cout << "Ciudad: " << (concesionario.Ciudad) << endl;
	//Lo hacemos para el resto de nuestras estructuras y datos que hemos recopilado
	cout << "Telefono: " << int long(concesionario.Telefono) << endl;
	cout << "\t\t" << endl;//Espacios para una mejor visualizacion.
	//Aqui se mostrara la informacion del vehiculo.
	cout << "..........Datos Del Vehiculo..........""\n" << endl;
	//De igual forma va el nombre de la estructura seguido punto y luego el dato (Vehiculo.Marca) en este caso para la marca que hemos elejido.
	cout << "Marca: " << (Vehiculo.Marca) << endl;
	cout << "Modelo: " << (Vehiculo.Modelo) << endl;
	cout << "Tipo: " << (Vehiculo.Tipo) << endl;
	cout << "Color: " << (Vehiculo.Color) << endl;
	cout << "\t\t" << endl; //Espacios para una mejor visualización.
	//Por ultimo nuestro datos del propietario.
	cout << "..........Datos Del Propietario..........""\n" << endl;
	cout << "Nombre: " << (Cliente.Nombre1) << " " << (Cliente.Nombre2) << " " << (Cliente.Apellido1) << " " << (Cliente.Apellido2) << endl;
	cout << "Edad: " << (Cliente.edad) << endl;
	//Mostramos el enunciado de lo que se mostrara seguido de la estrcutura con los datos que hemos llenado anteriormente.
	cout << "Numero De Cedula: " << (Cliente.cedula) << endl;
	cout << "Telefono: " << int long(Cliente.telefono) << endl;
	cout << "\t\t" << "Gracias" << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
