#include<stdio.h>
#include<conio.h>
int main()
{
    int n,row,col;
    printf("enter the value of n=");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }




        for(col=1; col<=row; col++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf(" ");
        }




        for(col=1; col<=n-row; col++)
        {
            printf(" *");
        }
        printf("\n");
    }


    getch();
}

