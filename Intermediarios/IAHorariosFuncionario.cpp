#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double hEnt[21] = { 7,8,8,8,7,8,8,8,7,7,8,8,8,8,8,8,8,8,8,8,8 };
    double mEnt[21] = { 59,0,7,6,58,1,5,8,59,56,3,7,10,0,1,3,3,8,1,2,6};
    double hSai[21] = { 17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17};
    double mSai[21] = { 0,6,2,4,6,4,0,2,4,0,0,6,2,2,6,0,4,2,4,0,6 };
    double auxE=0;
    double auxS = 0;
    double totalE[21];
    double totalS[21];
    double mediaE = 0;
    double mediaS = 0;
    double extras[21];
   
  
    for (int i = 0; i < 21; i++)
    {

        auxE = hEnt[i] * 60;
        totalE[i] = auxE + mEnt[i];
        mediaE += totalE[i];

        auxS = hSai[i] * 60;
        totalS[i] = auxS + mSai[i];
        mediaS += totalS[i];
    }
   
    mediaE = mediaE / 21;
    
    int medME = (int)fmod(mediaE, 60);
    int medHE = (int)mediaE / 60;

    int horaEnt= medHE;
    int minEnt=0;

    if (medME >=16 && medME <45)
    {
        minEnt = 30;
    }
    else if (medME >44)
    {
        horaEnt = horaEnt + 1;
    }

    int estimadaE = (horaEnt * 60) + minEnt;

    mediaS = mediaS / 21;

    int medMS =(int) fmod(mediaS, 60);
    int medHS = (int)mediaS / 60;
    int horaSai = medHS;
    int minSai = 0;

    if (medMS >= 16 && medMS < 45)
    {
        minSai = 30;
    }
    else if (medMS > 44)
    {
        horaSai = horaSai + 1;
    }

    int estimadaS = (horaSai * 60) + minSai;
   
    cout << "A média dos horários que o funcionário entrou no período é: ";
    printf("%02d:%02d\n\n", medHE, medME);

    cout << "O Horário estimado de entrada do funcionário é: ";
    printf("%02d:%02d\n\n", horaEnt, minEnt);

    cout << "A média dos horários que o funcionário saiu no período é: ";
    printf("%02d:%02d\n\n", medHS, medMS);

    cout << "O Horário estimado de saída do funcionário é: ";
    printf("%02d:%02d\n\n", horaSai, minSai);

   cout << "Com os dados fornecidos, podemos identificar que: ";

   int exE = (estimadaE - mediaE);
   int exS = (mediaS - estimadaS);
   int ext = exE + exS;

   int mEx = fmod(ext, 60);
   int hEx = ext / 60;
   
   if (mEx<0 || hEx<0)
    {
        hEx = hEx * (-1);
        mEx = mEx * (-1);
        printf("O funcionário está devendo %02d:%02d horas!\n\n", hEx, mEx);
       
    }
    else if (mEx == 0 && hEx == 0)
    {
        cout << "O funcionário não possui saldo de horas!" << endl;
    }
    else
    {
       printf("O funcionário possui %02d:%02d horas extras!\n\n", hEx, mEx);
    }
 
    system("pause");
}
