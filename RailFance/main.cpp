# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;

void railfance(int LK, string muchotextopuntojotapeje) {
	int a, b, tamaño,c,z,cont;
	string g;
	a = (LK * 2) - 2;
	tamaño = muchotextopuntojotapeje.size();
	b = tamaño / a; 
	c = b * a;
	z = c - tamaño;
	cont = 0;
  g = "z";
		
	while (cont <= z) {
		muchotextopuntojotapeje = muchotextopuntojotapeje + g;
		cont += cont;	
	}
	cout<< muchotextopuntojotapeje;
		
	
}

int main() {
	int LK=4;
	string muchotextoPuntoJpG="eesternocleidomastoideo";

 railfance(LK, muchotextoPuntoJpG);
}