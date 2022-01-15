#include <stdio.h>
int main () {

    int a1=0, a2=0, a3=0, i=0,t=0;
    printf ("Insira os termos a1 e a2 da sequencia fetuccine:\n");
    scanf ("%d %d", &a1, &a2);
    printf ("Quantos termos dessa sequencia deseja obter?\n");
    scanf ("%d",&t);
    printf ("%d\t%d\t",a1,a2);

    while (i<=t) {
        if (i%2==0) {
            a3=a1+a2;
            a1=a2;
            a2=a3;
        }
        else if (i%2!=0) {
            a3=a2-a1;
            a1=a2;
            a2=a3;
        }
        printf ("%d\t",a3);
        i++;
    }
    return 0;
}
