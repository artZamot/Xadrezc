#include <stdio.h>

int main() {
 
  int mRainha,mBispo = 0,mTorre = 0, mCavalo;
  int menu;

  printf("Escolha uma peça:\n");
  printf("1 - Rainha\n");
  printf("2 - Bispo\n");
  printf("3 - Torre\n");
  printf("4 - Cavalo\n");
  scanf("%d", &menu);

switch (menu)
{
case 1:
     printf("Você escolheu a Rainha\n");
     for (mRainha = 0; mRainha <= 8; mRainha++)
 
 {
      printf("Rainha moveu uma casa a esquerda\n");
 }
     break;

case 2:
     printf("Você escolheu o Bispo\n");
     if (mBispo % 2 == 0)
     {
      printf("Bispo moveu uma casa a esquerda\n");
      mBispo++;     }
      else if (mBispo % 2 != 0)
      {
         printf("Bispo moveu uma casa para cima\n");
          mBispo++;
      }     
     while (mBispo <= 4)
 {
     if (mBispo % 2 == 0)
     {
      printf("Bispo moveu uma casa a esquerda\n");
      mBispo++;     }
      else if (mBispo % 2 != 0)
      {
         printf("Bispo moveu uma casa para cima\n");
          mBispo++;
      }     
      
}
     break;

case 3:
     printf("Você escolheu a Torre\n");
     do
 {
      printf("Torre moveu %d casa(s) para direita\n", mTorre);
      mTorre++;
 } while (mTorre <= 5);

     break;

case 4:
     printf("Você escolheu o Cavalo\n");
     for (mCavalo = 1; mCavalo <= 2; mCavalo++)
     {
          printf("Baixo\n");

          while (mCavalo == 2)
          {
               printf("Direita\n");
               mCavalo++;
          }
          
     }
     
     break;

default:
     break;
}

return 0;
}