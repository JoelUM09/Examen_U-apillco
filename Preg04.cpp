#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
int  DatoS;
double donacion;
cout<<"INgresa tu ganancia:";
cin>>DatoS;

if(DatoS>0 && DatoS<=1000){
donacion = DatoS*0.05;
cout<< "Donacion es:  " << donacion;
}


else if(DatoS> 1000 && DatoS<=1500){
donacion = DatoS*0.07;
cout<< "Donacion es:  " << donacion;
}

else if(DatoS> 1500 && DatoS<=2000){
donacion = DatoS*0.08;
cout<< "Donacion es:  " << donacion;
}

else if(DatoS> 2000 && DatoS<=5000){
donacion = DatoS*0.1;
cout<< "Donacion es:  " << donacion;
}

else if(DatoS> 5000){
donacion = DatoS*0.15;
cout<< "Donacion es:  " << donacion;
}

    return 0;

}

