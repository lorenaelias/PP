#include <stdio.h>
int main()
{
    double A, INC, M, N, N1, soma = 0, i=0;

    printf("Digite um valor final: ");
    scanf("%lf", &M);
    printf("\nDigite o valor de A: ");
    scanf("%lf", &A);
    printf("\nDigite em quantos N passos para A chegar a ser M: ");
    scanf("%lf", &N);

    N1 = N+1;

    while(i < N){
        soma = soma+(N-i);
        i++;
    }

    INC = (M-(N1*A))/soma;

    printf("\nO valor do incremento INC eh %.4lf para que se chegue no valor de %.0lf em %.0lf passos\n", INC, M, N);
    return 0;
}
