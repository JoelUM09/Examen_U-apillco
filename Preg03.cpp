#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int horas;
	cout<<"Horas:";
	cin>>horas;
	double monto;
	monto=6;
	if(horas>4) monto+=(horas-4)*2;
	cout<<"Importe a pagar = S/."<<monto<<".0";
	return 0;
}
