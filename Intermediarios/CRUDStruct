#include "iostream"
#include "cstdlib"
#include "string"

using namespace std;

int linha = 0;
const int limite = 2;

struct registro
{
	string nome[limite];
	string rg[limite];
	string cpf[limite];
	string data[limite];
	
};

registro obj;
registro *pobj;

void NovaLinha ()
{
	system("cls");
	int npessoa=linha+1;
	
	if(npessoa<=limite)
	{
		cout<<"Digite o nome da "<<npessoa<<"° pessoa:"<<endl;
		cin>>(*pobj).nome[linha];
		
		cout<<"Digite o RG da "<<npessoa<<"° pessoa:"<<endl;
		cin>>(*pobj).rg[linha];
		
		cout<<"Digite o CPF da "<<npessoa<<"° pessoa:"<<endl;
		cin>>(*pobj).cpf[linha];
		
		cout<<"Digite a Data de Nascimento da "<<npessoa<<"° pessoa:"<<endl;
		cin>>(*pobj).data[linha];
		
		cout<<"\nRegistro Inserido!"<<endl;
		linha++;
	}
	else
	{
		cout<<"Número máximo de registros cadastrados!"<<endl;
		
	}
	
	getchar(); getchar();
	
}

void ExcluirLinha (){
	string cpfExcluir;
	int SN;
	system("cls");
	cout<<"Digite o CPF da pessoa que deseja excluir do sistema (somente os números!):"<<endl;
	cin>>cpfExcluir;
	
	for (int i=0; i<linha; i++)
	{
		if((*pobj).cpf[i]==cpfExcluir)
		{
			cout<<"Nome: "<<(*pobj).nome[i]<<" - RG:"<<(*pobj).rg[i]<<" - CPF: "<<(*pobj).cpf[i]<<" - Data de Nascimento: "<<(*pobj).data[i]<<endl<<endl;
			cout<<"Deseja excluir o registro acima?"<<endl<<"1 - Sim"<<endl<<"2 - Não"<<endl<<endl;
			cin>>SN;
			
			if(SN == 1)
			{
				(*pobj).nome[i] ="";
				(*pobj).rg[i] ="";
				(*pobj).cpf[i] ="";
				(*pobj).data[i] ="";
				cout<<"Registro excluido!"<<endl;
			}
			
		}
		
	}
	
	
	getchar(); getchar();
}

void PesquisarCPF()
{
	string cpfPesquisa;
	system("cls");	
	int cont;
	cout<<"Digite o CPF que deseja pesquisar (somente números!):"<<endl;
	cin>>cpfPesquisa;
	
	for (int i=0; i<linha; i++)
	{
		if((*pobj).cpf[i]==cpfPesquisa)
		{
			cout<<"Nome: "<<(*pobj).nome[i]<<" - RG:"<<(*pobj).rg[i]<<" - CPF: "<<(*pobj).cpf[i]<<" - Data de Nascimento: "<<(*pobj).data[i]<<endl;
			cont =1;
		}
		
	}
	if(cont<1)
	{
		cout<<"CPF não encontrado!"<<endl;
	}
	
	getchar(); getchar();
	
}
	
void Mostrar()
{
	system("cls");
		
	for (int i=0; i<linha; i++)
	{
			cout<<"Nome: "<<(*pobj).nome[i]<<" - RG:"<<(*pobj).rg[i]<<" - CPF: "<<(*pobj).cpf[i]<<" - Data de Nascimento: "<<(*pobj).data[i]<<endl;
		
	}
	getchar(); getchar();
}

int main () {
	
setlocale(LC_ALL, "Portuguese");

pobj=&obj;


int tecla;

MENU:
	system("cls");
	cout<<"*******MENU*******"<<endl;
	cout<<"1 - Nova Linha."<<endl;
	cout<<"2 - Mostrar Registros."<<endl;
	cout<<"3 - Pesquisar CPF."<<endl;
	cout<<"4 - Excluir Registro."<<endl;
	cout<<"5 - Sair."<<endl;
	cin>>tecla;
	
	switch (tecla){
	case 1: NovaLinha(); break;
	case 2: Mostrar(); break;
	case 3: PesquisarCPF(); break;
	case 4: ExcluirLinha(); break;
	case 5: exit(0);
	
	}
	goto MENU;
	return(0);
}
