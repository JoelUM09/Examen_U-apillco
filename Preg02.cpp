#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,b;
	cout<<"Ingrese el tamano del arreglo:";
	cin>>n;
	b=(n*(n+1))/2;
	
	cout<<"La suma de los "<<n<<" primeros numeros naturales es: "<<b;
	
	return 0;
	
}
