#include <stdio.h>

void mRainha(){
  printf("Você escolheu a Rainha\n");
   for (int i = 0; i <= 8; i++)
   {
    printf("Esquerda\n");
   }
}

void mTorre(){
  printf("Você escolheu a Torre\n");
     for (int i = 0; i <= 5; i++)
     {
      printf("Direita\n");
     }
}

void mBispo(){
  for ( int j = 0; j < 3; j++){
            printf("Cima\n");
            for (int i = 0; i < 1; i++)
                if(j < 2)
            {
                printf("Esquerda\n");
            }
            
        }
}

void mCavalo(){
     for (int i = 0; i < 3; i++)
{
    printf("%s\n", i < 2 ? "Cima" : "direita");
}
}

int main() {

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
     mRainha();
     break;

case 2:
     printf("Você escolheu o Bispo\n");
        mBispo();
        
        break;

case 3:
     printf("Você escolheu a Torre\n");
        mTorre();
     break;

case 4:
    mCavalo();

     break;

default:
     break;
}return 0;

}

