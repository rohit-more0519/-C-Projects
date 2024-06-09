#include<stdio.h>
int main()
{
  int balance=0;
  int pin;
  while(1)
  {
    printf("1.Deposit\n2.Withdraw\n3.Check balance\n4.Set pin\n5.Exit\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
      printf("Enter Pin:");
      int tempPin;
      scanf("%d",&tempPin);
      if(tempPin==pin)
      {
      printf("enter amount:");
        int amount;
        scanf("%d",&amount);
        balance +=amount;
        printf("Deposited Succefully:\n");
      }
      else{
        printf("Invalid pin\n");
      }
    }
    else if(choice ==2)
    {
       printf("Enter Pin:");
      int tempPin;
      scanf("%d",&tempPin);
      if(tempPin==pin)
      {
        printf("enter amount:");
        int amount;
        scanf("%d",&amount);
        if(amount < balance)
        {
          balance -= amount;
          printf("Withdraw Successfully\n");
        }
        else{
            printf("Insufficient balnce\n");
        }
      }
      else{
        printf("Invalid pin\n");
      }
    }
    else if(choice == 3)
    {
        printf("balance:%d\n", balance);
    }
    else if(choice == 4)
    {
      printf("Enter pin:");
      scanf("%d",&pin);
      printf("pin Successfully set\n");
    }
    else if(choice == 5)
    {
      break;
    }
    else
    {
      printf("Invalid choice\n");
    }
  }
}