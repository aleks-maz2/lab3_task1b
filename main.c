﻿#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>


void main(void) {
	setlocale(LC_ALL, "ua");
	float a;
	int b,c;

	printf("Введiть число b: ");
	scanf("%d",&b);

	printf("Введiть число c: ");
	scanf("%d",&c);

	if(c == 5) {
		a = sqrt(b)+2*sqrt(c);
	}
	else if(c == 0) {
		a = (b)/(c+6);
	}
	else if(c == -5) {
		a = b+12*pow(c,3);
	}
	else  {
		printf("Неможливо обчислити!\n");
		return;
	}

	printf("Результа: %f\n\n", a);
	return;
}
