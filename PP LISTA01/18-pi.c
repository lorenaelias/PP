#include <stdio.h>

int main()
{
    float c=4, pi=0;
    int i=1;

    while(c/i>0.00001)
        {
            pi+=c/i;
            i+=2;
            pi-=c/i;
            i+=2;
            printf("Aproximando Pi:   %f\n", pi);
        }
    printf("\n\n\tPi vale: %.5f\n\n", pi);
            return 0;
}
