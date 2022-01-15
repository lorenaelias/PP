#include <stdio.h>
int main () {

    double massa,porcentagem;
    int segundos=0,minutos=0,horas=0,x;
    int op=0;

    do {
        segundos=0;minutos=0;horas=0;
        printf ("Deseja realizar o calculo do tempo da reducao da massa?\n");
        printf ("Digite 0 para nao e 1 para sim\n");
        scanf ("%d",&x);

        if (x==1) {
            printf ("Insira a massa do material em gramas: \n");
            scanf ("%lf", &massa);

            while (massa>=0.1) {
                porcentagem=(0.833/100.0)*massa;
                massa -= porcentagem;
                segundos ++;
            }

            while (segundos>=60) {
                segundos -= 60;
                minutos++;
            }
            while (minutos>=60) {
                minutos -= 60;
                horas++;
            }

            printf ("O tempo gasto eh de %dh %dmin %dseg\n\n",horas,minutos,segundos);
        }
    } while (x==1);

    return 0;
}
