#include<stdio.h>
int main()
{
  int oldResult=0;
  while(1)
  {
    printf("Enter 1 for addtion\n Enter 2 for substraction\n 3 for Exit: ");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
      printf("Enter 1 to perform Fresh operation \n Enter 2 to perform old Operation:\n");
      int choice1;
      scanf("%d",&choice1);
      if(choice1==1){
      int n1,n2;
      printf("Enter First number:");
      scanf("%d",&n1);
      printf("Enter Second number:");
      scanf("%d",&n2);
      oldResult=n1+n2;
      printf("Addition:%d\n",(n1+n2));
    }
    else{
      int n1;
      printf("Enter a number:");
      scanf("%d",&n1);
      printf("Addition:%d\n",(oldResult+n1));
      oldResult =oldResult+n1;
    }
    }
    else if(choice ==2)
    {
      printf("Enter 1 to perform Fresh operation \n Enter 2 to perform old Operation:\n");
      int choice1;
      scanf("%d",&choice1);
      if(choice1==1){
      int n1,n2;
      printf("Enter First number:");
      scanf("%d",&n1);
      printf("Enter Second number:");
      scanf("%d",&n2);
      oldResult=n1-n2;
      printf("Addition:%d\n",(n1-n2));
    }
    else{
      int n1;
      printf("Enter a number:");
      scanf("%d",&n1);
      printf("Addition:%d\n",(oldResult-n1));
      oldResult =oldResult-n1;
    }
    }
    else if(choice == 3)
    {
      break;
    }
  
  else{
    printf("Enter valid choice\n");
  }
  }
  return 0;
}