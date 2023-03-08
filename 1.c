#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int list();
void deposit();
void withdraw();
void transfer();
void checkdetail();
void last();
int totalamount=5000, damo, with,Tr,totaldeposit=0,totalwithdraw=0,totaltransfer=0,Acc;

char a[50];
void main()
{
   printf("\n Enter your name:");
   gets(a);
   printf("\n enter your account number:");
   scanf("%d",&Acc);
  while (1)
  {
    
    switch (list())
    { 
        case 1:
           deposit();
           totaldeposit=+damo;
           break;
        case 2:
           withdraw();
           if(with<=totalamount)
           totalwithdraw=+with;
           break;
        case 3:
           transfer();
           if(Tr<=totalamount)
           totaltransfer=+Tr;
           break;
        case 4:
        checkdetail();
        break;
        case 5:
          last();
          getch();
          exit(0);
    default:
         printf("\n invalid choice");
        break;
    }  // end of switch.   
       
}
    }  //end of while loop.
 

int list()
 {
  int ch;
  printf("\n1. deposit amount:");
  printf("\n2. withdraw amount:");
  printf("\n3. transfer amount:");
  printf("\n4. checkdetail:");
  printf("\n5. exit:");
  printf("Enter your choice:"); 
  scanf("%d", &ch);
  return (ch);
 }  

void deposit()
{
  printf("\n enter amount you want to deposit:");
  scanf("%d",& damo);
  totalamount+=damo;
}
 void withdraw()
 {
     printf("\n enter amount you want to withdraw:");
     scanf("%d",&with);
       if(with<=totalamount)
           totalamount-=with;
       else
           printf("balance is not sufficient,you can't withdraw");   
 }
void transfer()
{
    printf("\n enter amount you want to transfer:");
    scanf("%d",&Tr);
       if(Tr<=totalamount)
           totalamount-=Tr;
       else
           printf("balance is not sufficient,you can't transfer"); 
} 
void checkdetail()
{
       printf("\n total amount=%d",totalamount);
       printf("\n total deposit amount=%d",totaldeposit);
       printf("\n total withdraw amount=%d",totalwithdraw);
      printf("\n total transfer amount=%d",totaltransfer);
}
void last()
{
       printf("\n***************\n");
       printf("\n your name=%s",a);
       printf("\n your account number=%d",Acc);
       printf("\n total amount=%d",totalamount);
       printf("\n total deposit amount=%d",totaldeposit);
       printf("\n total withdraw amount=%d",totalwithdraw);
      printf("\n total transfer amount=%d",totaltransfer);
      printf("\n *****Thanks*****");
}