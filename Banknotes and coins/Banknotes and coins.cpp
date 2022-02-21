#include<stdio.h>
int main()
{
	double amount;
	int n;
	int j;
	int n100, n50, n20, n10, n5, n2;
	int c01, c050, c025, c10, c05, c001;
	scanf_s("%lf", &amount);
	n = amount;
	n100 = n / 100;
	n = n % 100;
	n50 = n / 50;
	n = n % 50;
	n20 = n / 20;
	n = n % 20;
	n10 = n / 10;
	n = n % 10;
	n5 = n / 5;
	n = n % 5;
	n2 = n / 2;
	n = n % 2;
	c01 = n;

	amount = (amount - n) * 100;
	j = amount;
	j = j % 100;
	c050 = j / 50;
	j = j % 50;
	c025 = j / 25;
	j = j % 25;
	c10 = j / 10;
	j = j % 10;
	c05 = j / 5;
	j = j % 5;
	c001 = j / 1;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", c01);
	printf("%d moeda(s) de R$ 0.50\n", c050);
	printf("%d moeda(s) de R$ 0.25\n", c025);
	printf("%d moeda(s) de R$ 0.10\n", c10);
	printf("%d moeda(s) de R$ 0.05\n", c05);
	printf("%d moeda(s) de R$ 0.01\n", c001);
	return 0;
}