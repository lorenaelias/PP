#include <stdio.h>
int main () {

    int n,i,n1=0,n2=0,n3;

    for (n=1000;n<=9999;n++) {
        n1=n/100;
        n2=n%100;
        n3=(n1+n2);

        if ((n3*n3)==n) printf ("%d\t",n);
    }
    return 0;
}
