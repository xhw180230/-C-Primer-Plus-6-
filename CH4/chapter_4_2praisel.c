#include<stdio.h>//使用不同类型的字符串
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name?");
	scanf_s("%s", name, 40);
	printf("Hello!%s. %s\n", name, PRAISE);

	return 0;
}