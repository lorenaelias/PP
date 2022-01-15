#include<stdio.h>

int main(){

    int x,i,j,n,k=65;

    printf("Insira o numero de caracteres a serem impressos no formado de moldura: ");
    scanf("%d",&n);
    printf("\n");

    for(i=0;i<n*2;i++){
        for(j=0;j<n*2;j++){
            x=(n*2)-1-i;
            if(x > (n*2)-1-j) x = (n*2)-j-1;
            if(x > j)x=j;
            if(x > i)x=i;
            printf("%c",k+x);
        }
        printf("\n");
    }
return 0;
}
