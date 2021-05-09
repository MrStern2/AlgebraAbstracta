#include <iostream>
using namespace std;


void mod(int b, int n) {
//teorema de division
    int cont;

    if (b >= 0){
        cont = b - (b / n) * n;
        cout<<cont;}
    else
        cont = b - ((b / n) - 1) * n;
        cout<<cont;
};

int main() {
int a,b;
cout<<"ingrese el primer valor a";
cin>>a;
cout<<"ingrese el valor b";
cin>>b;

mod(a,b);


}