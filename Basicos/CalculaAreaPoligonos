#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main() { 
    system("cls");
    setlocale(LC_ALL, "Portuguese");

	int nl=0;
    float cl=0, res=0;
    
    cout<<"digite o numero de lados do polígono!"<<endl;
    cin>>nl;
    
    if (nl>5)
    {
        cout<<"POLÍGONO NÃO IDENTIFICADO!"<<endl; return 0;
    }
	else if(nl<3)
    {
        cout<<"NÃO É UM POLÍGONO!"<<endl; return 0;
    }
    
    cout<<"digite o comprimento do lado em cm!"<<endl;
    cin>>cl;
    
    if(nl==3) 
    {
        res=(sin(60*3.14159/180)*cl)*cl/2;
        cout<<"TRIÂNGULO DE ÁREA: "<<res<<"cm²"<<endl;
    }
	else if(nl==4)
    {
        res=cl*cl;
	    cout<<"QUADRADO DE ÁREA: "<<res<<"cm²"<<endl;}
	else if(nl==5) 
    {
        res=((cl/tan(60*3.14159/180))*cl/2)*10;
	    cout<<"PENTÁGONO DE ÁREA: "<<res<<"cm²"<<endl;
    }
	
	system("pause");
}
