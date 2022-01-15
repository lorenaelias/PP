#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float fatorial(int N)
{
	int i;
	float f=1.0;
	for(i = 1; i <= N; i++) f *= i;
	return f;
}
float cosseno(float x)
{
	int n;
	float c = 0.0;
	for(n = 0; n <= 10; n++) c = c + pow(-1,n)*pow(x,2*n)/fatorial(2*n);
	return c;
}
int main()
{
	float ang;

		printf("Digite o valor do angulo: ");
		scanf("%f",&ang);
		ang = 3.141592*ang/180.0;
		printf("cosseno = %.5f\n",cosseno(ang) );
	return 0;
}
