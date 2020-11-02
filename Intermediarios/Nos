#include "iostream"
#include "cstdlib"
using namespace std;
typedef struct me cad;
int cont=0;
struct me 
{
	int pos;
	cad * liga;
};

cad * ultimoNO;
cad * primeiroNO;

void alocar () 
{
    cont ++;
    cad * newcad = (cad*) malloc ( sizeof ( cad ) );
    if ( cont == 1 ) 
	{
	    (*newcad).liga = NULL;
	    (*newcad).pos = cont;
	    primeiroNO = newcad;
	    ultimoNO = newcad;
	}
    else
    { 
		  (*ultimoNO).liga = newcad;
	    (*newcad).liga = NULL;
	    (*newcad).pos = cont; 
	}
    ultimoNO = newcad;
    cout << "\nRegistro adicionado a lista na " << cont << "° posição\n\n";
}

void buscar_excluir() 
{
   bool encontrado;
   int busca;
   cad *anterior;
   cad *atual;
   anterior = primeiroNO;
   atual = primeiroNO;

   if(atual == NULL) 
   {
        cout << "\nEstrutura vazia!!!\n";
	}
	else 
	{
	   cout << "Digite um número para excluir o registro na posição correspondente:\nPosição: ";
	   cin >> busca;
	
	   while(atual!=NULL) 
	   {
	    	if (busca == atual->pos) 
			{
	         	if(atual == primeiroNO)
				 {
	            encontrado = true;
	            primeiroNO = (*atual).liga;
	            cout << "\n\nRegistro deletado\n\n";
	            free(atual);
	         	}
	       
	
	         	else if(atual == ultimoNO)
			  	{
	            encontrado = true;
	            cout << "\n\nRegistro deletado\n\n";
	            free(atual);
	
	            ultimoNO = anterior;
	            (*ultimoNO).liga = NULL;
	
	        	}
	      
	        	else {
	            encontrado = true;
	            cout << "\n\nRegistro deletado\n\n";
	            (*anterior).liga = (*atual).liga;
	            free(atual);
       			} 
			}
	        anterior = atual;
	        atual = (*atual).liga;
	
	        if(atual== NULL && encontrado != true)
			{
	            cout << "\n\nNó não encontrado\n\n";
			}
		}
    }
}

void exibir() 
{ 
	cad * temp; 
	temp =primeiroNO;
	if(temp==NULL)
	{
	    cout << "\n\nEstrutura vazia\n";
	}
	while ( temp != NULL) 
	{
		cout << "\nPosição do Registro: " << (*temp).pos<< "°"<< endl;
		temp = (*temp).liga; 
	} 
}

int main() 
{
	setlocale(LC_ALL, "portuguese");
	int opcao;
	MENU:
	system("cls");
	cout<<"******MENU******\n1.Alocar\n2.Buscar e Excluir\n3.Exibir\n";
	cin >> opcao;
	
	switch(opcao) 
	{
		case 1: 
			{
			alocar(); 
			system("pause");
			goto MENU; break;
			}
		case 2: 
			{
			buscar_excluir(); 
			system("pause"); 
			goto MENU;  
			break;
			}
		case 3: 
			{
			exibir();
			system("pause");
			goto MENU;
			break;
			}
	}
}
