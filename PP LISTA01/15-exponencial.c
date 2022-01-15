#include <stdio.h>
#include <math.h>
#define precisao 0.0000001

int main () {

    double x, e=1.0,var=0.0,num=0.0,n=1.0,ant=1.0,den;

    printf ("Qual eh a potencia da constante e? ");
    scanf ("%lf", &x);

    if (x>=0) {
        do {
            den = n*ant;
            num = pow (x,n);
            var = num/den;
            ant = den;
            e+=var;
            n++;
        }while (var>precisao);
        printf ("\ne^%.2lf = %.7lf", x, e);
    }
    if (x<0) {
        x = -x;
        do {
            den = n*ant;
            num = pow (x,n);
            var = num/den;
            ant = den;
            e+=var;
            n++;
        }while (var>precisao);
        printf ("\ne^%.2lf = %.7lf", x, 1.0/e);
    }

    return 0;
}
