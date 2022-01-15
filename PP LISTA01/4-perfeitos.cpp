#include<stdio.h>
int main(){
    int x=1,y,somadiv,qntsa=0,qntsr=0,qntsp=0;
    do{
        somadiv=0;
        for(y=1;y<x;y++)
        {
           if(x%y==0)somadiv+=y;
        }
        if(somadiv==x)qntsp++;
        if(somadiv==x)printf("%d eh um numero perfeito.\n",x);
        if(somadiv<x)qntsr++;
        if(somadiv<x)printf("%d eh um numero reduzido.\n",x);
        if(somadiv>x)qntsa++;
        if(somadiv>x)printf("%d eh um numero abundante.\n",x);
        x++;
    } while(x<=200);

    printf("Quantidade de numeros perfeitos = %d.\n",qntsp);
    printf("Quantidade de numeros reduzidos = %d.\n",qntsr);
    printf("Quantidade de numeros abundantes = %d.\n",qntsa);

    return 0;
}
