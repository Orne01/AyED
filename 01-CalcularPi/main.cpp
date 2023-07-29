using namespace std;

double calculo_pi(int& i){

	int verificador;
	double pi;
	const int entero_pi=3141592, entero=1000000;
	bool iguales=0;
	
i=0;
pi=0.0;

	for (i; iguales!=1;i++){
		pi += pow(-1,i) *4 / (2*i+1);
		verificador= pi * entero;
	
		if (verificador==entero_pi){
		iguales=1;	}
	}	
return pi;
}


int main(){
	int iteraciones;
	double aproximado_pi = calculo_pi(iteraciones);
	
	cout.precision(7);
	cout<<"El valor de pi aproximado con 6 decimales es: "<<aproximado_pi<<endl;
	cout<<"La cantidad de iteraciones realizadas fueron: "<<iteraciones;
	return 0;
}
