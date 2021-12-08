#include<stdio.h>
#include<conio.h>
void display(int x,int y,int z)
{
    if(x>y&&x>z)
        printf("the maximum number is =%d\n",x);
    else if(y>x&&y>z)
        printf("the maximum number is =%d\n",y);
    else
        printf("the maximum number is =%d\n",z);


}
void display2(int a,int b,int c)
{
    if(a<b&&a<c)
        printf("the minimum number is =%d\n",a);
    else if(b<a&&b<c)
        printf("the minimum number is =%d\n",b);
    else
        printf("the minimum number is =%d\n",c);

}

int main()
{
    int num1,num2,num3;
    printf("enter the three number=\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    display(num1,num2,num3);
    display2(num1,num2,num3);


    getch();
}
