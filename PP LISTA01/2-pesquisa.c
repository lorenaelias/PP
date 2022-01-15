#include <stdio.h>
int main () {

    int i=1, homens=0, mulheres=0, sexo, j=50;
    double media_populacao, media_mulheres=0, altura, maior, menor,porcentagem;

    do {
        printf ("Digite o valor da altura, em metros, e o sexo do %d* entrevistado:", j);
        scanf ("%lf %d", &altura, &sexo);

                //O próximo if é usado para validar o sexo do entrevistado;
        if (sexo!=0 && sexo!=1) {
            printf ("Entrevistado invalido\n");
            j++;
            --i;
        }
        //O próximo if serve para utilizar o primeiro entrevistado como comparativo entre as alturas;
        if (i==1) {
            menor=altura;
            maior=altura;
        }
        if (sexo==1) {
            media_mulheres += altura;
            media_populacao += altura;
            mulheres++;
        }
        if (sexo==0) {
            ++homens;
            media_populacao += altura;
        }
            if (i!=1) {
                if (altura>maior) maior=altura;
                else if (altura<menor) menor=altura;
                else if (altura==maior) maior=altura;
                else if (altura==menor) menor=altura;
            }
        j--;
        ++i;
        porcentagem = 2*homens;

    }while (i<=50);

    printf ("A maior altura dentre os pesquisados eh de %.2lfm\n", maior);
    printf ("A menor altura dentre os pesquisados eh de %.2lfm\n", menor);
    printf ("A media da altura das mulheres pesquisadas eh de %.2lfm\n", media_mulheres/mulheres);
    printf ("A media da altura da populacao pesquisada eh de %.2lfm\n", media_populacao/50.0);
    printf ("A porcentagem de homens a partir da pesquisa eh de %.2lf%%\n",porcentagem);


    return 0;
}
