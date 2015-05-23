#include <cstdio>

int main()
{
	int l, d, k, p;
	scanf("%d %d", &l, &d);
	scanf("%d %d", &k, &p);
	int pedagios = l / d;
	int valorPedagio = pedagios * p;
	int valorKM = l * k;
	printf("%d\n", valorPedagio + valorKM);
	
	// printf("%d\n", l * k + (l / d) * p);
	return 0;
}

