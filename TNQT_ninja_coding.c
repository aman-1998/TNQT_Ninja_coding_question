#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100],i;
    int n,sum=0,r,sumO=0,sumE=0,count;
    printf("Enter any input: ");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    {
        if(i%2==0)
            sumO+=str[i]-48;
        else
            sumE+=str[i]-48;
    }
    printf("\nAns = %d",sumO-sumE);
    return 0;
}
