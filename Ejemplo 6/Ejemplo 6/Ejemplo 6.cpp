// Ejemplo 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <cstdlib>
#include <iostream>
#include <stdlib.h>


using namespace std;

struct DatosPersonales   //Aqui Se Crea nuestra 1a estructura que contendra los datos del cliente.
{
	char nombre[30];
	char apellido1[30];
	int cedula;
	int long telefono;
};
struct ProductosVenta   //Nuestra 2da estructura con los datos o producto que compraremos lo hemos limitado a 3 productos.
{                       //Esto es una caja rapida :D
	char Producto[30];
	char Producto2[30];
	char Producto3[30];
	int cant, Pu, pt;
	int cant2, Pu2;
	int cant3, Pu3;
};
int main()
{

	DatosPersonales cliente; //Llamamos a nuestras 2 estrcuturas con un nombre para poder utilizar su contenido mas adelante.
	ProductosVenta Producto;

	cout << "\n\n""\t\t""HAZLO TU MISMO PEREZOSO" << endl; //Titulo del Programa.
	cout << "\t\t""Dir: C.C LA ESTACION LC 120" << endl; //Alguna información de una factura común.
	cout << "\t\t""Nit. 800.020.706-9""\n""\t\t""FACTURA DE VENTA No 979-24786" << endl;
	cout << "\t\t" << endl; //Espacio para una mejor vizualización.

	cout << "Nombre Del Cliente:"; //Aqui empezaremos a usar nuestra 1a estrcutura.
	cin >> (cliente.nombre),  //Pedimos nuestro 1er dato,primero el nombre de la estrutucra seguido de un punto y luego el dato que queremos tomar de esta.
		cin >> (cliente.apellido1);//Pedimos nuestro 2do dato,primero el nombre de la estrutucra seguido de un punto y luego el dato que queremos tomar de esta.
	cout << "Numero De Cedula:";
	cin >> (cliente.cedula);//Pedimos nuestro 3er dato,primero el nombre de la estrutucra seguido de un punto y luego el dato que queremos tomar de esta.
	cout << "Telefono Fijo:";
	cin >> (cliente.telefono);//Pedimos nuestro 4to dato,primero el nombre de la estrutucra seguido de un punto y luego el dato que queremos tomar de esta.

	cout << "\t\t" << endl;//Espacio para una mejor vizualización.
	//Aqui usaremos nuestra 2 estructura (Producto).
	//Para Esto de igual forma. Se nombra la 2da estructura (Producto) luego (.) y luego el dato (Producto,Cant,Pu)de esta estructura que queremos tomar.
	cout << "Producto:", cin >> (Producto.Producto), cout << "Cantidad:", cin >> (Producto.cant), cout << "Precio:", cin >> (Producto.Pu);
	//Para Esto de igual forma. Se nombra la 2da estructura (Producto) luego (.) y luego el dato (Producto,Cant2,Pu2)de esta estructura que queremos tomar.
	cout << "Producto:", cin >> (Producto.Producto2), cout << "Cantidad:", cin >> (Producto.cant2), cout << "Precio:", cin >> (Producto.Pu2);
	//Para Esto de igual forma. Se nombra la 2da estructura (Producto) luego (.) y luego el dato (Producto,Cant3,Pu3)de esta estructura que queremos tomar.
	cout << "Producto:", cin >> (Producto.Producto3), cout << "Cantidad:", cin >> (Producto.cant3), cout << "Precio:", cin >> (Producto.Pu3);


	//Una vez tenemos todo nuestro datos procedemos a organizarlos y mostrarlo en pantalla de forma ordenada
	system("cls");//Con este symtem borraremos todo lo escrito anteriormente.

	{
		//Se realiza la operacion correspondiente a la cantidad ingresados y sus precios luego sumamos todo.
		(Producto.pt) = (Producto.cant) * (Producto.Pu) + (Producto.cant2) * (Producto.Pu2) + (Producto.cant3) * (Producto.Pu3);
		//Para cualquier operación siempre se llama a la estructura y el dato que se usa de esta.
	}

	cout << "\n\n""\t\t""HAZLO TU MISMO PEREZOSO" << endl; //Aqui se muestra la información inicial del programa
	cout << "\t\t""Dir C.C La Estacion LC 120" << endl;
	cout << "\t\t""Nit. 800.020.706-9""\n""\t\t""FACTURA DE VENTA No 979-24786" << endl;
	cout << "\t\t" << endl;
	cout << "Nombre:" << (cliente.nombre) << (cliente.apellido1) << "\n";//Se muestra la informacion ingresada para la estrutura cliente.
	cout << "Numero De Cedula:" << (cliente.cedula) << "\n";//De igual forma se llama 1nombre de la estructura(Cliente)punto(.) y luego el dato usado de esta(nombre,cedula,telefono).
	cout << "Telefono:" << (cliente.telefono) << "\n";
	cout << "\t\t" << endl;
	cout << "Producto               Cant               Precio" << endl;
	//Mostraremos la 2da estructura ingresada tratando de que concuerde con su correspondiente titulo 
	cout << (Producto.Producto) << "                   " << (Producto.cant) << "                 " << "$" << (Producto.Pu) << endl;
	//Ponemos nuestro 2do dato de la 2da estructura .Luego, calculamos un espacio para mostrar el 2do dato de la misma estrcutura ,y asi mismo para el 3er dato.
	cout << (Producto.Producto2) << "                  " << (Producto.cant2) << "                " << "$" << (Producto.Pu2) << endl;
	//Ponemos nuestro 3er dato de la 2da estructura .Luego, calculamos un espacio para mostrar el 2do dato de la misma estrcutura ,y asi mismo para el 3er dato.
	cout << (Producto.Producto3) << "                  " << (Producto.cant3) << "                " << "$" << (Producto.Pu3) << endl;
	cout << "\t\t\t" << endl;
	cout << "Precio Total:" << "$" << (Producto.pt) << endl;//Mostramos el resultado obtenido anteriormente.
	cout << "\t\t\t" << endl;
	cout << "\t\t""GRACIAS POR SU COMPRA" << endl;


	system("PAUSE");
	return EXIT_SUCCESS;
}


