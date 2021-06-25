// Ejemplo 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;


struct DatosClinica //Creamos nuestra 1era estructura para Clinica
{
	char nombre[30], nombre2[30], nombre3[30], nombre4[30];
	int long telefono, telefono1; //Creamos nuestros datos necesarios para llenarlos mas adelante.
	char Dir[30], Dir2[30], Dir3[30], Dir4[30];
};
struct DatosMedico //Creamos nuestra 2da estructura para Medico.
{
	char nombre[30], nombre2[30], nombre3[30], nombre4[30];
	int long cedula, telefono;//De Igual forma creamos nuestros datos a llenar.
	char especialidad[30], especialidad2[30];
	int  matricula;

};
struct DatosPaciente//Nuestra 3era estrcutura paciente
{
	char nombre8[30], nombre9[30], nombre10[30], nombre11[30];
	int edad;
	int cedula; //Igual creados nuestros datos para ser llenados
	char estado[30];
	char Rh[30], Rh2[30];
};

int main()
{
	//Nombramos cada una de nuestras estrcutura para luego ser llamadas y ser usadas.
	DatosClinica Clinica; DatosMedico Medico; DatosPaciente Paciente;

	cout << "\t\t""Clinica Paso al cielo""\n" << endl; //Nombre o titulo de nuestro programa.
	cout << "\t""Informacion sobre la clinica""\n" << endl;//Empezamos a pedir nuestro datos de la 1era estrcutura.
	cout << "Nombre de la Clinica:", cin >> (Clinica.nombre), cin >> (Clinica.nombre2), cin >> (Clinica.nombre3), cin >> (Clinica.nombre4);
	cout << "Telefono: ", cin >> (Clinica.telefono); //Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Telefono 2: ", cin >> (Clinica.telefono1);//Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Direccion: ", cin >> (Clinica.Dir), cin >> (Clinica.Dir2), cin >> (Clinica.Dir3), cin >> (Clinica.Dir4);
	cout << "\t\t" << endl;

	cout << "\t""Datos Del Medico Encargado""\n" << endl;
	cout << "Nombre Completo: ", cin >> (Medico.nombre), cin >> (Medico.nombre2), cin >> (Medico.nombre3), cin >> (Medico.nombre4);
	cout << "Cedula: ", cin >> (Medico.cedula);//Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Especialidad: ", cin >> (Medico.especialidad), cin >> (Medico.especialidad2);
	cout << "No. Matricula: ", cin >> (Medico.matricula);//Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Telefono: ", cin >> (Medico.telefono);//Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "\t\t" << endl;

	cout << "\t""Datos Paciente""\n" << endl;
	cout << "Nombre Completo: ", cin >> (Paciente.nombre8), cin >> (Paciente.nombre9), cin >> (Paciente.nombre10), cin >> (Paciente.nombre11);
	cout << "edad: ", cin >> (Paciente.edad);//Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "No De Cedula: ", cin >> (Paciente.cedula);//Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Tipo Sangra Rh: ", cin >> (Paciente.Rh), cin >> (Paciente.Rh2);//Como lo hemos hecho antes llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Estado: ", cin >> (Paciente.estado);

	system("cls");//Borramos nuestra pantalla para luego mostrar toda nuestra informacion de forma ordenada.

	cout << "\t\t""Clinica Paso al cielo""\n" << endl;
	cout << "\t""Informacion sobre la clinica""\n" << endl;
	cout << "Nombre de la Clinica:" << (Clinica.nombre) << " " << (Clinica.nombre2) << " " << (Clinica.nombre3) << " " << (Clinica.nombre4) << endl;
	cout << "Telefono: " << (Clinica.telefono) << endl;//De Igual forma para mostrar nuestros datos dados anteriormente llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Telefono 2: " << (Clinica.telefono1) << endl;
	cout << "Direccion: " << (Clinica.Dir) << " " << (Clinica.Dir2) << " " << (Clinica.Dir3) << " " << (Clinica.Dir4) << endl;
	cout << "\t\t" << endl;
	//De Igual forma para mostrar nuestros datos dados anteriormente llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "\t""Datos Del Medico Encargado""\n" << endl;
	cout << "Nombre Completo: " << (Medico.nombre) << " " << (Medico.nombre2) << " " << (Medico.nombre3) << " " << (Medico.nombre4) << endl;
	cout << "Cedula: " << (Medico.cedula) << endl;
	//De Igual forma para mostrar nuestros datos dados anteriormente llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Especialidad: " << (Medico.especialidad) << endl;
	//De Igual forma para mostrar nuestros datos dados anteriormente llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "No. Matricula: " << (Medico.matricula) << endl;
	cout << "Telefono: " << (Medico.telefono) << endl;
	cout << "\t\t" << endl;

	cout << "\t""Datos Paciente""\n" << endl;
	//De Igual forma para mostrar nuestros datos dados anteriormente llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Nombre Completo: " << (Paciente.nombre8) << " " << (Paciente.nombre9) << " " << (Paciente.nombre10) << " " << (Paciente.nombre11) << endl;
	cout << "edad: " << (Paciente.edad) << endl;
	cout << "No De Cedula: " << (Paciente.cedula) << endl;
	//De Igual forma para mostrar nuestros datos dados anteriormente llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Tipo Sangra Rh: " << (Paciente.Rh) << " " << (Paciente.Rh2) << endl;
	//De Igual forma para mostrar nuestros datos dados anteriormente llamamos a nuestra estructura seguido de un punto y el dato que queremos tomar
	cout << "Estado: " << (Paciente.estado) << endl;


	cout << "GRACIAS" << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}

