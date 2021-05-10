
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<cstring>

//Anthony Erick Raul Gamarra Gonzales, Sean bienvenidos a este codigo nivel Dios.
using namespace std;


int MCD(int a, int b) {
    int resto = 1, x;

    while (resto !=0) {
        x = a / b;
        resto = a - x * (b);
        if (resto == 0 or b==1) {
            break;
        }
            a = b;
            b = resto;
        }
        return b;
    }

int mod(int b, int n) {

    int t;

    if (b >= 0)
        t = b - (b / n) * n;//teorema de division
    else
        t = b - ((b / n) - 1) * n;// si es menor a 0

    return t;
};

int tamstring(string alfabeto) {

    int TamAlfabeto = size(alfabeto);
    return TamAlfabeto;

};



void cifrado(int a, int b, string mensaje,string alfabeto) {
    int conteoAlfabeto;
    conteoAlfabeto = tamstring(alfabeto);
    bool comprobante = true;

    while (comprobante) {
        cout << endl;
        cout << a << endl;
        if (b > conteoAlfabeto) {
            cout << "se añadira modulo: ";
            b = mod(b, conteoAlfabeto);
            cout << b << endl;
        }
        cout << b << endl;
        comprobante = false;
        break;
    }

    int piv;
    string pos;
    

    for (int i = 0; i < size(mensaje); i++) {
        for (int j = 0; j < conteoAlfabeto; j++) {
            if (mensaje[i] == alfabeto[j]) {
                piv = j;
                piv = (a * piv) + b;
                if (piv >= conteoAlfabeto) {
                    piv = mod(piv, conteoAlfabeto);
                }
                pos = alfabeto[piv];
                mensaje.replace(i,1,pos);
                break;
            }
        }
    }
cout<<mensaje;
  
};
void descifrado(int a, int b, string mensaje,string alfabeto) {

    int conteoAlfabeto;
    conteoAlfabeto = tamstring(alfabeto);
    bool comprobante = true;

       

    int piv;
    string pos;
    int prueba1, prueba2;
    prueba1 = mod(b, conteoAlfabeto);



    for (int i = 0; i < size(mensaje); i++) {
        for (int j = 0; j < conteoAlfabeto; j++) {
            if (mensaje[i] == alfabeto[j]) {
                piv = j;
                piv = (a * piv) - b;
                if (piv >= conteoAlfabeto) {
                    piv = mod(piv, conteoAlfabeto);
                }
                pos = alfabeto[piv];
                mensaje.replace(i, 1, pos);
                break;
            }
        }
    }
    std::cout<<mensaje;


};


void afin(int claveA, int claveB, string mensaje, string alfabeto) {
    //a y b son las claves 


    int x;//x debe ser el numero que representa el simbolo del string
    tamstring(alfabeto); //numero de caracteres del alfabeto
    int c;
    int contador;
   // contador = claveA * x;
//    c = contador + claveB;

    //mod(c,n);
}
using namespace std;



int main() {


   std:: cout << endl;   std::cout << " las reglas son simples la clave A = mcd (a, tamalfabeto) = 1 ";     std::cout << endl;
   std::cout << " la clave B = num random mod tamaño alfabeto ";

    int claveA=0, claveB=0,ingreso;
    string mensaje;
    string alfabeto = "abcdefghijklmnñopqrstuvwxyz().:0123456789 ABCDEFGHIJKLMNÑOPQRSTUVWXYZ,+-";
    std::cout << endl;
    //int clave1,clave2; cout << endl;
    std::cout << "las claves pre proceso antes de usar el mcd o el modulo";
    std::cout << endl;
    std::cout << "desea ingresar las claves? si 1, no 2 : ";  std::cout << endl;
    int ingre;
    int Kami=0;
    int dios;
    std::cin >> ingre;
    if (ingre == 1) {

        std::cout << "Ingrese su clave A";
        std::cout << endl;
        std::cin >> claveA;
        std::cout << endl;
        std::cout << "comprobaremos si A = mcd (a, tamalfabeto)=1  ";

        Kami = MCD(claveA, tamstring(alfabeto));
        std::cout << endl;
        std::cout << "la respuesta es : ";
        std::cout << Kami;
        std::cout << endl;
        std::cout << endl;

        while (Kami != 1)
        {
            std::cout << "al parecer su clave A MCD tamaño alfabeto no es igual a 1 \n"
                << "porfavor ingrese otra clave \n";
            std::cin >> claveA;
            Kami = MCD(claveA, tamstring(alfabeto));
            std::cout << "le indicaremos el valor de A mcd (a,alfabeto) : ";
            std::cout << Kami; std::cout << " si el resultado es 1 podremos continuar";    std::cout << endl;


        }std::cout << "ahora comprobado, continuamos ";
        


/*        cout << "Ingrese su clave B";
        cout << endl;
        cin >> claveB;*/
        std::cout << "la clave B es un (numero aleatorio) mod (el alfabeto)\n";
        std::cout << "podemos seguir las reglas y generar un numero aleatorio mod el alfabeto \n o elegir un numero como clave B\n";

        std::cout << " \n";
        std::cout << "si quiere ingresar la clave, marque 1, sino, marque 2 \n";
        std::cin >> ingreso;

        if (ingreso == 1) {
            std::cout << "Ingrese su clave B";
            std::cout << endl;
            std::cin >> claveB;        std::cout << endl;
            std::cout << claveB; std::cout << endl;
            dios = mod(claveB, tamstring(alfabeto));
            std::cout << "la clave B modulo alfabetto es ";
            std::cout << endl;
            std::cout << dios;
            std::cout << endl;
            std::cout << "Luego de revisar el doc que mando, nunca aclara si se debe sacar el B modulo N y luego el A+B Modulo N  o solo es A + B Modulo N y sin necesidar de haber sacado el B modulo N antes ";
            std::cout << "\n igual lo estoy usando \n";

 

        }
        else {

            int d;
            srand(time(NULL));
            std::cout << "generando clave :";
            for (d = 1; d <= 10; d++)
            {
                claveB = 1 + rand() % size(alfabeto);
            }
             dios = mod(claveB, tamstring(alfabeto));
             std::cout << endl; std::cout<<" (la clave generada) B mod n(el tamaño del alfabeto) = " <<dios;        std::cout << endl;
            
        }
        std::cout << endl;
        std::cout << "actualmente nuestas claves son A = "<<claveA<<" y Clave B = "<<dios <<" despues de todo el proceso";
        std::cout << endl;
    }
    if (ingre == 2) {//generar clave aleatoria
        int  c,d,f;
        srand(time(NULL));
        std::cout << "generando claves :";
     //para la clave A
        Kami = 0;
        while (Kami != 1)
        {
            for (c = 1; c <= 10; c++)
            {
                claveA = 1 + rand() % size(alfabeto);
                f = claveA;
            }
            
            Kami = MCD(claveA, tamstring(alfabeto));

        }
        std::cout << "La clave A que cumple con la condicion es : ";
        std::cout << endl;
        std::cout << f;
        std::cout << endl;

//Para la clave B
        std::cout << "generando la clave B";
        for (d = 1; d <= 10; d++)
        {
            claveB = 1 + rand() % size(alfabeto);
        }
        dios = mod(claveB, tamstring(alfabeto));
        std::cout << "la clave B generada es";

        std::cout << "la clave modulo alfabetto es ";
        std::cout << endl;
        std::cout << dios;
        std::cout << endl;
 }
    

    


    std::cout << endl;

    std::cout << "ingrese el mensaje: ";

    std::cout << endl;
    std::cin >> mensaje;
    getline(cin, mensaje);


    int opcion;

    std::cout << "Selecciona:\n 1 para Encriptar\n 2 para Desencriptar \n ";
    std::cin >> opcion;

    if (opcion == 1) {

        std::cout << endl;
        cifrado(claveA, claveB, mensaje, alfabeto);

    }

    if (opcion == 2) {

        std::cout << endl;
        descifrado(claveA, claveB, mensaje, alfabeto);

    }



    };


    
/*

    if (opcion == 1) {
        string nuevo = Cesar::Cifrar(mensaje, clave);
        cout << "\nMensaje encriptado: " << nuevo;
    }
    if (opcion == 2) {
        string nuevo = Cesar::Descifrar(mensaje, clave);
        cout << "\nMensaje descifrado: " << nuevo;

    }
    else {//para cuando se busque hacer criptoanalisis .




    };

    */
