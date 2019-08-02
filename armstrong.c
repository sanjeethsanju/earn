#include<stdio.h>
#include<conio.h>
int main()
{
    int number,sum=0,remainder=0,cube=0,temp;
    printf("enter the number:");
    scanf("%d",&number);
    temp=number;
    while(number!=0)
    {
        remainder=number%10;
        cube=pow(remainder,3);
        sum=sum+cube;
        number=number/10;
    }
    if(sum==temp)
    {
        printf("yes,armstrong");
    }
    else
    {
    printf("no,not armstrong");
    }
    return 0;
}
