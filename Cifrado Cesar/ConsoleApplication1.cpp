
#include <iostream>
#include<time.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <algorithm>

//Anthony Erick Raul Gamarra Gonzales

using namespace std;

struct Cesar {
	static string Cifrar(string t, int clave);
	static string Descifrar(string t, int clave);
};

inline string Cesar::Cifrar(string t, int clave) {
	transform(t.begin(), t.end(), t.begin(), toupper);

	string r = "";
	for (auto c : t) {
		if (isalpha(c)) {
			c += clave;

			if (c > 'Z') c -= 26;
			if (c < 'A') c += 26;
		}
		r += c;
	}
	return r;
}

inline string Cesar::Descifrar(string t, int clave) { return Cifrar(t, -clave); }


void analisisFrecuencia (string criptograma, string ArchivoSalida) {





};



int main() {
	int opcion;
	int clave;
	string mensaje;
	cout << "Selecciona:\n 1 para Encriptar\n 2 para Desencriptar \n 3 para Criptoanalisis \n  ";
	cin >> opcion;

	while (opcion != 1 && opcion != 2 && opcion != 3); 	system("cls");


	cout << "desea ingresar la clave? si 1, no 2 : ";
	int ingre;
	cin >> ingre;
	if (ingre==1){
		cout << "ingrese la clave: ";
		cin >> clave;
	}
	if (ingre == 2) {//generar clave aleatoria
		int  c;
		srand(time(NULL));
		cout << "generando clave :";
		for (c = 1; c <= 10; c++)
		{
			clave = 1 + rand() % (11 - 1);
			
		}

		cout << clave << " ";
		cout << endl;
	}
	cout << "ingrrese el mensaje: ";
	cin >> ws;
	getline(cin, mensaje);

	if (opcion == 1) {
		string nuevo = Cesar::Cifrar(mensaje, clave);
		cout << "\nMensaje encriptado: " << nuevo;
	}
	if (opcion== 2) {
		string nuevo = Cesar::Descifrar(mensaje, clave);
		cout << "\nMensaje descifrado: " << nuevo;

	}
	else {//para cuando se busque hacer criptoanalisis .




	};


	return 0;
}