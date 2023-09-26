#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


float inoutmoney[51];
float j;//实数i  
float luxir;

float cul(float *inoutmoney,int n)
{    int i=0;
    float realmoney=0;
    float sum=0;
    for(i=1;i<n+1;i++)
    {
        sum+=inoutmoney[i]/pow(j+1,i);
        
        
    }
    return sum;
}

int main()
{
    int n;//正整数m
    
    scanf("%d %f",&n ,&j);
    
    
    int i;
    for(i=0;i<n+1;i++)
    {
        
        scanf("%f",&inoutmoney[i]);
    
    }
    
    float money=cul(inoutmoney,n);
    printf("%.3f",money+inoutmoney[0]);

    return 0;
    
}


    
    
    
    
    
    

