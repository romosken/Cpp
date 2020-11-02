#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
    setlocale(LC_ALL, "Portuguese");
    int tecla=0; int a=0;

    menu:

         system("cls");

         cout<<"\nMenu\n1-Executar\n2-Finalizar"<<endl; cin>>tecla;

        switch(tecla){
              case 1: 
                    cout<<"\n\nDigite o ano!"<<endl; 
                    cin>>a;

                    cout<<"O ano ";
                    if (a%4==0 and a%100!=0 or a%4==0 and a%400==0)
                    {
                        cout<<"é bissexto!"<<endl;
                    }
                    else
                    {
                        cout<<"não é bissexto!"<<endl;
                    }

                    break;

              case 2: 
                    exit(0);
                    break;
        }

       system("pause");
       goto menu; 
       return 0;
}
