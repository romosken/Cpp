
#include "iostream"
#include "cstdlib"
#include "math.h"
using namespace std;

double delta (double *a, double *b, double *c)
{

return(pow(*b,2)-4*(*a)*(*c));	
}

double BX1 (double *a, double *b, double *delta)
{

return ((-*b+ sqrt(*delta))/(2**a));	
}
double BX2 (double *a, double *b, double *delta)
{

return ((-*b - sqrt(*delta))/(2**a));	
}

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	double a,b,c;
	double *n1,*n2,*n3;
	double *Pdt,*Px1,*Px2, dt, x1,x2;

	cout<<"Digite o valor de 'A'"<<endl;
	cin>>a;
	cout<<"Digite o valor de 'B'"<<endl;
	cin>>b;
	cout<<"Digite o valor de 'C'"<<endl;
	cin>>c;

	n1=&a;
	n2=&b;
	n3=&c;

	dt = delta(n1,n2,n3);

	Pdt=&dt;

	x1 = BX1(n1,n2,Pdt);

	Px1=&x1;

	x2 = BX2(n1,n2,Pdt);

	Px2 =&x2;


	cout<<"o Delta da equação é: "<<*Pdt<<endl;

	if(*Pdt<0){

	cout<<"Não há raízes reais!"<<endl;	
	}
	else{

	cout<<"o x1 da equação é: "<<*Px1<<endl;
	cout<<"o x2 da equação é: "<<*Px2<<endl;
	}
	system("pause");
}
