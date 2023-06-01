#include <iostream>
#include <cmath>

using namespace std;

double calculo_pi(){

	int i, signo, n;
	double pi;
n=1000000;
/*cout<<"Escriba el numero de iteraciones a realizar: "; cin>>n;*/
i=0;
signo=1;
pi=0.0;

	for (i; i<=n;i++){
		pi += pow(-1,i) / (2*i+1);
	}	
pi*=4;
return pi;
}


int main(){
	double aproximado_pi = calculo_pi();
	cout.precision(7);
	cout<<"El valor de pi aproximado con 6 decimales es: "<<aproximado_pi<<" Y se realizaron 1000000 de iteraciones.";
	/*cout<<"El valor de pi aproximado con 6 decimales es: "<<aproximado_pi;*/
	return 0;
}
