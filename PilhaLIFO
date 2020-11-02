#include "iostream"
#include "string"
#define max 3

using namespace std;

typedef struct lifo pilha;

struct lifo
{ 
	int topo;
	int idade[max];
	string nome[max];
	double salario[max]; 
};
 
bool pilhaCheia(pilha p)
{ 
	if (p.topo == max - 1)
	{
		return true;
	}
	return false; 
}

bool pilhaVazia(pilha p)
{ 
	if (p.topo==-1)
	{
		return true; 
	}
	return false; 
} 

pilha push (pilha p)
{
	if ( pilhaCheia ( p ) == true) 
	{
		cout << "\nPilha Cheia!"<<endl;
		system("pause");
		return p; 
	}
	p.topo ++;
	cout<<"\nDigite o nome a ser empilhado!"<<endl;
	cin>>p.nome[p.topo];
	cout<<"\nDigite a idade a ser empilhada!"<<endl;
	cin>>p.idade[p.topo];
	cout<<"\nDigite o salário a ser empilhado!"<<endl;
	cin>>p.salario[p.topo];
	system("pause");
	return p; 
}

pilha pop (pilha p) 
{
	if (pilhaVazia(p) == true)
	{ 
		cout << "\nA pilha já está vazia!"<<endl;
		system("pause"); 
		return p; 
	}
	cout << "\nOs valores desempilhados serão:\n" <<p.nome[p.topo]<<", "<<p.idade[p.topo]<<", "<<p.salario[p.topo]<< endl;
	system("pause");
	p.nome[p.topo] = '\0';
	p.idade[p.topo] = '\0';
	p.salario[p.topo] = '\0';
	p.topo --; 
	return p; 
}


void mostrarPilha (pilha p) 
{
	if (pilhaVazia(p) == true)
	{
		cout << "\nA pilha está vazia!"<<endl;
		system("pause"); 
		return; 
	}
	
	for (int i=p.topo; i>=0; i--)
	{
		cout <<"\n"<<p.nome[i]<<", "<<p.idade[i]<<", "<<p.salario[i]<< endl;
	}
	system("pause");
	
}

int tela() 
{
	int tecla;
	system("cls");
	cout << "\n****Menu****\n1-Push\n2-Pop\n3-Mostrar Pilha\n4-Sair\n";
	cin >> tecla;
	return tecla; 
}

void controlarPilha (pilha p)
{
	int tecla;
	do { 
		tecla = tela();
		switch(tecla) 
		{
			case 1: 
				p = push(p);
				break;
			
			case 2: 
				p = pop(p); 
				break;
				
			case 3: 
				mostrarPilha ( p ); 
		}
	} 
	while (tecla != 4);
	
	cout << "\nPrograma Finalizado...!\n"; 
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	pilha p1;
	p1.topo = -1;
	controlarPilha ( p1 );
	
	return 0; 
}
