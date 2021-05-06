#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


void descifrando(string palabra) {

    int tam, filas, col, num, num2, conteo, cont;
    string cifra, IntenCifra;
    tam = palabra.size();
    conteo = 0;
    filas = 5; col = 10;  num = 0; num2 = 0; cont = 0;

    for (int j = 0; j <= tam; j++) {

        if (j == num2 and num < filas) {
            cifra = palabra[j];
            IntenCifra += cifra;
            num2 = num2 + col;
            num = num + 1;
        }
        if (j == tam-1) {
            conteo = conteo + 1;
            num2 = cont + 1;
            num = 0;
            j = cont;
            cont = cont + 1;
            if (conteo == col) {
                j = tam-1;
            }
        }
    }
    cout<< IntenCifra;
}

void cifrando(string palabra) {
    int tam, filas, col, num, num2, conteo, cont;
    string cifra, IntenCifra;
    tam = palabra.size();
    conteo = 0;
    filas = 15; col = 3;  num = 0; num2 = 0; cont = 0;

    for (int j = 0; j <= tam; j++) {

        if (j == num2 and num < filas) {
            cifra = palabra[j];
            IntenCifra += cifra;
            num2 = num2 + col;
            num = num + 1;
        }
        if (j == tam-1) {
            conteo = conteo + 1;
            num2 = cont + 1;
            num = 0;
            j = cont;
            cont = cont + 1;
            if (conteo == col) {
                j = tam-1;
            }
        }
    }
    cout<< IntenCifra;

}
int main() {
cout<<" escripalabraa para cifrar";
   cout<<endl;
    string a;
    cin >>a;
    
    cout<<endl;


cout<<"cifrando";
cout<<endl;
    cifrando(a);

    cout<<endl;
    cout<<"descifrando";
    cout<<endl;
    descifrando(a);
cout<<endl;
    
}