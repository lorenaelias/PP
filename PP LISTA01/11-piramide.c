#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    int i,j,k,n,l;

    do
    {
        printf(" Introduza um numero para a piramide : ");
        scanf("%d",&num);
    }
    while (num<2);
    n=num-1;
    l=0;
    k=0;
    for (i=1; i<=num; i++)
    {

        for (l=1; l<=n; l++)
        {
            printf("  ");
        }
        for (j=1; j<=i; j++)
        {
            printf("%2d",j);
        }
        for (k=j-1; k>1; k--)
        {
            printf("%2d",(k-1));
        }
        printf("\n");
        n--;
    }
}

