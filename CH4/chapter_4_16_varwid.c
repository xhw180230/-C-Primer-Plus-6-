#include<stdio.h>//printf()����*���η����÷�
int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf_s("%d", &width);
	printf("The number is :%*d:\n", width, number);
	printf("Now enter a width and a percision:\n");
	scanf_s("%d %d", &width, &precision);
	printf("Weight=%*.*f\n", width, precision, weight);
	printf("Done!\n");

	return 0;
}