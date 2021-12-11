#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter the range of print prime number= ");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        for(j=2;j<=i; j++)
        {

            if(i%j==0)
                break;

        }
        if(i==j)
        {
            printf("%d=is a prime number\n",i);
        }
    }






    getch();
}
