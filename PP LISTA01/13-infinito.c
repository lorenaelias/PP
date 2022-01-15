#include <stdio.h>

int main(void){
    int n,linha,coluna;
    char c;
    c=0xC5;
    printf("Altura da imagem:\n");
    scanf("%d" ,&n);
    if(n<=0){
        printf("Erro . . .\n");
   }else for(linha=1;linha<=n;linha++){
            for(coluna=1;coluna<=3*n;coluna++){
                if(linha<=n-n/2){
                        if(coluna==n-linha+1||coluna==n+linha||coluna==2*n-linha+1||coluna==2*n+linha){
                            printf(" ");
                        }else printf("%c",c);
            }else if(linha>n-n/2){
                if(coluna==n-(n-linha)||coluna==n+((n-linha)+1)||coluna==2*n-(n-linha)||coluna==2*n+((n-linha)+1)){
                    printf(" ");
                }else printf("%c",c);
            }else  ;}
            printf("\n");

}
return 0;
}
