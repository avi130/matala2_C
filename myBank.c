#include "myBank.h"
#include <stdio.h>
#include <math.h>



double a [2][50]={{0},{0}};

int isOpen(int x){
    if (a[1][x-901]==0)
    {
    return -1;

    }
    return 1;
    
    
}


double O(double x){
    int acount=-1;
    if (x<0)
    {
        return -6;
    }
    for (int j = 0; j < 50; j++)
    {
      if (a[1][j]==0)
      {
          a[1][j]=1;
          acount=j;
          j=50;
      }

    }
    if (acount==-1)
    {
        return -7;
    }
    else
    {
        a[2][acount]=x;
        return acount+901;
    }
    
}


double B(int x){
     if(x<901 || x> 950) 
    {
       return -1;
    }
    else if (a[1][x-901]==0)
    {
        return -2;
    }
    return a[2][x-901];
}

double D(int x, double y){
     if(x<901 || x> 950)
    {
       return -1;
    }
    else if (a[1][x-901]==0)
    {
        return -2;
    }
    else if(y<0)
    {
        return -5;
    }
    else {

    a[2][x-901]+=y;
    }
    return a[2][x-901];
}

double W(int x, double y){
    if(x<901 || x> 950)
    {
       return -1;
    }
     else if (a[1][x-901]==0)
    {
        return -2;
    }
     else if(y<0)
    {
        return -5;
    }
    double b= (a[2][x-901]) -y;
    if (b >= 0 )
    {
        a[2][x-901]=b;
        return b;
    }
    else 
    return -3;

}


int C(int x){
    if(x<901 || x> 950)
    {
       return -1;
    }
    if(a[1][x-901] == 1)
    {
        a[1][x-901]=0;
        a[2][x-901]=0;
        return 1;
    }
    else return -4;
}

void P(){
    int count=0;
    for (int j = 0; j < 50; j++)
    {
        if(a[1][j]==1)
        {
        count++;
        double x= a[2][j];
        printf("account number %d has ", j+901 );
        printf("%.2f $ \n",x);
        }
    }
    if (count==0)
    printf("there are no open accounts\n");
}

void E(){
    for (int i = 0; i < 50; i++)
    {
        if( a[1][i]==1)
        {
            a[1][i]=0;
            a[2][i]=0;
        }
    }
    


}

void I(double x){
    if(x<0)
    {
        printf("Negative number is invalid \n");
    }
    else
    {
        for (int i = 0; i < 50; i++)
        {
            if (a[1][i]==1)
            {
                a[2][i]+= (a[2][i]*x);
            }
        }
        
    }
    
}








