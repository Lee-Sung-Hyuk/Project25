#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void)
{
	double change(int a);
	double inch;
	printf("인치를 입력하세요: ");
	scanf("%lf", &inch);
	printf("%f인치는 %.2fcm입니다.\n", inch, change(inch));

	
}

double change(int a)
{
	double b;
	b = (a * 2.54);
	return (b);
}

