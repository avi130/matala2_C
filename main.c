#include "myBank.h"
#include <stdio.h>
#include <string.h>  

double twoAfterPoint(double y){
    y=y*100;
    y=(int)y;
    y=y/100;
    return y;
}

void printErors(double x){
   if(x==-1)
    {
        printf("you entered wrong account \n");
    }
    else if (x==-2)
    {
        printf("This account is close. try again\n");
    }
    else if(x==-3)
    {
        printf("you dont have enough mony to do that action \n");
    }
    else if (x==-4)
    {
        printf("This account was already close \n");
    }
    else if (x==-5)
    {
        printf("you cant deposit/withdraw a negative number\n");
    }
    else if (x==-6)
    {
        printf("you cant open a bank account and put a negative number of money\n ");
    }

}

int main() {
char again='y';
do
{
again='y';    //while again == y run again.
char transactionType;
double y=0;
int z=0;


printf("Transaction type ?\n"); //ask what you want to do
scanf(" %c", &transactionType);

if( transactionType == 'O')
{ 
    printf("Initial deposit?\n ");
    if(scanf("%lf",&y)==1){
    y= twoAfterPoint(y);
    int ansO= O(y);
    if( ansO==-1 || ansO==-2 ||ansO==-3 ||ansO==-4 ||ansO==-5 ||ansO==-6)
    {
        printErors(ansO);
    }
    else 
    {
        printf("your new account number is: %d \n",ansO  );
    }
    }
    else
    {
        printf("wrong input.please insert an integer\n");
    }
    
}
   
else if ( transactionType == 'B'){
    printf("Please enter your account number: \n");
    if(scanf("%d", &z)==1)
    {
     if(z>950 || z<901)
    {
        printf("you entered wrong account\n");
    }
     else if (isOpen(z)==-1)
    {
        printf("this account is close\n");
    }
    else{
    y=B(z);
    if( y==-1 || y==-2 ||y==-3 ||y==-4 ||y==-5)
    {
        printErors(y);
    }
    else
    {
    printf("you have %.2f $ in account number %d \n", y, z);
    } 
    }
    }
        else
    {
        printf("wrong input.please insert an integer\n");
    }
}
else if ( transactionType=='D')
{
    printf("Please enter your account number: \n");
    if(scanf("%d", &z)==1)
    {
     if(z>950 || z<901)
    {
        printf("you entered wrong account\n");
    }
    else if (isOpen(z)==-1)
    {
        printf("this account is close\n");
    }
    else{
    printf("How much you want to deposit into your account: \n");
    scanf("%lf", &y);
    y= twoAfterPoint(y);
    double s=D(z,y);
    if( s==-1 || s==-2 ||s==-3 ||s==-4 ||s==-5)
    {
        printErors(s);
    }
    else
    {
    printf("now you have %.2f $ in your account \n", s);
    } 
    }
    }
        else
    {
        printf("wrong input.please insert an integer\n");
    }
}
else if ( transactionType=='W')
{
    printf("Please enter your account number: \n");
    if(scanf("%d", &z)==1)
    {

    if(z>950 || z<901)
    {
        printf("you entered wrong account\n");
    }
    else if (isOpen(z)==-1)
    {
        printf("This account is close.\n");
    }
    
    else{
        
    printf("How much you want to withdraw frow your account: \n");
    scanf("%lf", &y);
    y= twoAfterPoint(y);
    double s=W(z,y);
    if( s==-1 || s==-2 ||s==-3 ||s==-4 ||s==-5)
    {
        printErors(s);
    }
    else
    {
    printf("now you have %.2f $ in your account \n", s);
    } 
    }
    }
        else
    {
        printf("wrong input.please insert an integer\n");
    }
}
else if ( transactionType=='C')
{
    printf("Please enter your account number: \n");
    if(scanf("%d", &z)==1)
    {
     if(z>950 || z<901)
    {
        printf("you entered wrong account\n");
    }
    else{
    int z2= C(z);
    if( z2==-1 || z2==-2 ||z2==-3 ||z2==-4 ||z2==-5)
    {
        printErors(z2);
    }
    else if (z2==1)
    {
        printf("This account closed successfuly  \n");
    }
    }
    }
        else
    {
        printf("wrong input.please insert an integer\n");
    }
} 
else if ( transactionType=='P')
{
    P();
} 
else if ( transactionType=='E')
{
    E();
    printf("all the accouns are reset and the bank is closed. \n");
    if (transactionType=='E')
    {
        again='n';
    }

} 
else if ( transactionType=='I')
{
    printf("Please enter a present of interest: \n");
    if(scanf("%lf", &y)==1)
    {
     if(y<=0)
        {
            printf("you cant insert a negative present\n");
        }
    else{
            y= twoAfterPoint(y);
        I(y); 
    }
    }
        else
    {
        printf("wrong input.please insert an integer\n");
    }
}
else
{
    printf("there is no such transaction, try again\n");

}


} while (again=='y');

return 0;
}

