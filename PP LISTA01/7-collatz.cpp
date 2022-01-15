#include <stdio.h>
int main () {

    int n=0;
    printf ("Insira o valor n para a conjectura de collatz: \n");
    scanf ("%d",&n);

    printf ("%d\t", n);

    while (n!=1) {
        if (n%2==0) n = n/2;
        else if (n%2!=0) n=(3*n)+1;
        printf ("%d\t",n);
    }

    return 0;
}
