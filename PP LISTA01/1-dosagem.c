#include <stdio.h>

int main () {

    int idade;
    double peso;

    printf ("Informe a sua idade e seu peso em kg, respectivamente: ");
    scanf ("%d %lf", &idade, &peso);
        while (idade<=0 || peso<5) {
    printf ("Peso ou idade invalidos\n");
    printf ("Informe a sua idade e seu peso em kg, respectivamente: ");
    scanf ("%d %lf", &idade, &peso);
        }

        if (idade>=12) {
            if (peso>=60) printf ("O paciente deve tomar 1000 mg, logo 40 gotas\n");
            else if (peso<60) printf ("O paciente deve tomar 875 mg, logo 35 gotas\n");
        }
        if (idade<12) {
            if (peso>=5 && peso<=90) printf ("O paciente deve tomar 125 mg, logo 5 gotas\n");
            else if (peso>9 && peso<=16) printf ("O paciente deve tomar 250 mg, logo 10 gotas\n");
            else if (peso>16 && peso<=24) printf ("O paciente deve tomar 375 mg, logo 15 gotas\n");
            else if (peso>24 && peso<=30) printf ("O paciente deve tomar 500 mg, logo 20 gotas\n");
            else if (peso>30) printf ("O paciente deve tomar 750 mg, logo 30 gotas\n");
        }
    return 0;
}
