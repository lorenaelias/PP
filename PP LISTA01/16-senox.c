#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

double fact(int k);

int main ()
{
    int k = 0;
    double x = 0, t = 0, seno=0;

    printf (" Digite um valor para X em graus: ");
    scanf("%lf", &x);

    x = (x/180)*PI;

    do
    {
        t = pow(x,2*k+1)/fact(2*k+1);
        seno += pow(-1,k)*t;
        k++;
    }while(k<10);
    printf ("\n Seno: %.10lf\n\n",seno);

    system ("pause");
    return 0;

}
double fact(int k)
{
    double i, fatorial = 1;

    for (i = k; i > 1; i--)
    {
        fatorial *= i;
    }
    return fatorial;
}
