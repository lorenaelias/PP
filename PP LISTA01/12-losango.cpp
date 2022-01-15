#include <stdio.h>
int main () {

    int a,n,i,j,u,v;

    do {
        printf ("Insira 1 para desenhar um losango e qualquer outro numero para sair: ");
        scanf ("%d",&a);


        if (a==1) {

            do {printf ("Qual eh a dimensao do losango? (o losango deve ser impar e maior do que zero): ");
                scanf ("%d",&n);
                printf ("\n");
            } while (n%2==0 || n==1);

            for (i=0;i<n/2;i++) {
                printf (" ");
            } printf ("+\n");

            u=n/2-1;
            v=1;

            for (i=1;i<=n/2;i++) {
                for (j=0;j<u;j++) {
                    printf (" ");
                }printf ("+");
            for (j=0;j<v;j++) {
                printf (" ");
            }printf ("+\n");
            u--;
            v+=2;
            }

            u+=2;
            v-=4;

            for (i=n/2+1;i<n-1;i++) {
                for (j=0;j<u;j++) {
                    printf (" ");
                }printf ("+");
            for (j=0;j<v;j++) {
                printf (" ");
            }printf ("+\n");
                u++;
                v-=2;
            }
            for (i=0;i<n/2;i++) {
                printf (" ");
            } printf ("+\n");

        printf ("\n");

        }else break;


    }while (a==1);

    return 0;
}

