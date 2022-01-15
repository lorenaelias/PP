#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int dia01, mes01, ano01, dia02, mes02, ano02;
int i,j;
int naobissexto, anocomum, anoinicial, anofim, bissexto;
int mes30=0, mes31=0, fevcomum=0, mescomum=0, mesinicial=0, mesfim=0;
int dias, diasbi=0, diasnaobi=0;
int somaanos,somameses,somadias,t,n;

main()
{
    printf("CALCULO DO NUMERO DE PESSOAS AFETADAS PELA MOLESTIA EPIDEMICA\n");
    printf("Observacao: o numero de dias entre a data inicial e a final deve ser um numero inteiro menor do que 14\n");

    printf("Entre com uma data inicial: \n\n");
    printf("Dia: ");
    scanf("%d",&dia01);
    printf("Mes: ");
    scanf("%d",&mes01);
    printf("Ano: ");
    scanf("%d",&ano01);

    printf("\n\nEntre com uma data final: \n\n");
    printf("Dia: ");
    scanf("%d",&dia02);
    printf("Mes: ");
    scanf("%d",&mes02);
    printf("Ano: ");
    scanf("%d",&ano02);
    printf("\n");


    if (ano01!=ano02)
    {
        anocomum=365;
    }
    anoinicial=ano01+1;
    anofim=ano02-1;
    for (i=anoinicial; i<=anofim; i=i+1)
    {
        if ((i%4==0)&&(i%100!=0)&&(i%400!=0))
        {
            bissexto=bissexto+1;
        }
        else
        {
            naobissexto=naobissexto+1;
        }
    }


    if (mes01!=mes02)
    {
        mescomum=30;
    }
    mesinicial=mes01+1;
    mesfim=mes02-1;
    for (j=mesinicial; j<=mesfim ; j=j+1)
    {
        if (j==04||j==06||j==9||j==11)
        {
            mes30=dias+30;
        }
        else if (j==01||j==03||j==05||j==07||j==8||j==10||j==12)
        {
            mes31=dias+31;
        }
        else if (j==02)
        {
            fevcomum=dias+28;
        }
        else if ((j==02)&&((i%4==0)&&(i%100!=0)&&(i%400!=0)))
        {
            fevcomum=dias+29;
        }
    }

    diasbi=bissexto*366;
    diasnaobi=naobissexto*365;
    somaanos=diasbi+diasnaobi;
    somameses=mes30+mes31+fevcomum+mescomum+anocomum;
    somadias=dia02-dia01;
    t=somaanos+somameses+somadias;

    n = (64)*t - ((t*t*t)/3);

    if(t<14)
    {
        printf("Numero de pessoas afetadas pela molestia: %d\n",n);
    }
    if(t>=14)
    {
        printf("Nao e' possivel calcular o numero de pessoas afetadas, pois o numero de dias excede 13\n");
    }
    system ("PAUSE");
}
