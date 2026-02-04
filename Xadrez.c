#include <stdio.h>

int main() {
 
  int mRainha,
      mBispo = 0,
      mTorre = 0;
 
 for (mRainha = 0; mRainha <= 5; mRainha++)
 {
      printf("Rainha moveu %d casa(s)\n", mRainha);
 }

 while (mBispo <= 5)
 {
      printf("Bispo moveu %d casa(s)\n", mBispo);
      mBispo++;
 }

 do
 {
      printf("Torre moveu %d casa(s)\n", mTorre);
      mTorre++;
 } while (mTorre <= 5);
 
      return 0;
}