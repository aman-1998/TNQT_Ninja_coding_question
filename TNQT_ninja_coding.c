#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    int n,sum=0,r,sumO=0,sumE=0,count;
    printf("Enter any input: ");
    scanf("%s",str);
    n=atoi(str);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    n=sum;
    count=1;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(count%2!=0)
            sumO+=r;
        else
            sumE+=r;
        count++;
    }
    printf("\nAns = %d",sumO-sumE);
    return 0;
}
