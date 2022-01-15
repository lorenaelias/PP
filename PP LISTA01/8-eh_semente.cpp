#include <stdio.h>
int main () {

    int x,y,x1=1,aux,aux2;
    printf ("Insira X e Y: ");
    scanf ("%d %d",&x,&y);
    aux=x;
    aux2=x1;

    do {
        x1=x%10;
        printf ("%d*",x1);
        aux2=x%10*aux2;
        x/=10;
    } while (x!=0);

    aux2*=aux;
    printf ("%d = %d\n",aux,aux2);
    printf ("%d = %d?\n",aux2, y);

    if (aux2==y) printf ("\nSim, entao X eh semente de Y.\n");
    else printf ("\nNao, entao X nao eh semente de Y.\n");

    return 0;
}
