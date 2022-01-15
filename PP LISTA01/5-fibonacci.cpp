#include <stdio.h>
int main () {

    int a=0,b=1,fibonacci,i,n;

    printf ("Insira a linha da sequencia fibonacci desejada: ");
    scanf ("%d", &n);
    printf ("%d ",b);

    for (i=0;i<n-1;i++) {
        fibonacci=a+b;
        a=b;
        b=fibonacci;
        printf ("%d ",fibonacci);
    }
    return 0;
}
