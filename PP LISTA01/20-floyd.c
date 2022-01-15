#include<stdio.h>

int main(){
    int x=1;
    int i,j,n;

    printf ("Insira o numero de linhas do triangulo de Floyd: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%02d ",x);
            x++;
        }
        printf("\n");
    }

return 0;
}
