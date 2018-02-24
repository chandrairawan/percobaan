

#include <stdio.h>
int saldo = 100;

void main()
{
    int loop = 1;
    int pilihan; int amount; 
    
    while (loop!=0){
      printf("Balance : %d\n",saldo);
    
      printf("1.Add Balance \n2.Withdraw\n==: ");
      scanf("%d", &pilihan);
    
      if(pilihan == 1) {
        printf("Amount = ");
        scanf("%d", &amount);
        saldo += amount;
      }
      else if(pilihan == 2) {
        printf("Amount = ");
        scanf("%d", &amount);
        saldo -= amount;
      }
      else {loop=0;}
    }
}
    
