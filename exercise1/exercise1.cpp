﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Rus"); //Для вывода на русском языке

	int a[10], n, f;

	// Ввод размера массива
	f = 0;
	do {
		if (f)
			printf("\nПопробуйте снова: ");
		else
			printf("Введите количество элементов последовательности (максимум 10): ");

		scanf("%d", &n);

		// Если введено слишком маленькое кол-во 
		if (n < 1) {
			f = 1;
			printf("Слишком маленькое число!");
		}

		// Если введено слишком большое кол-во
		else if (n > 10) {
			f = 1;
			printf("Слишком большое число! Вы превысили максимальное количество элементов!");
		}

		// Если введено оптимальное кол-во
		else f = 0;

	} while (f);

	//Ввод последовательности
	printf("Введите %d элемент", n);
	if (n > 1 && n < 5)
		printf("а");
	else if (n >= 5 && n <= 10)
		printf("ов");
	printf(" последовательности: \n");

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);


	f = 1;

	for (int i = 0; i < 9 && f; i++) {
		if (a[i] % 2 == 1 && a[i + 1] % 2 == 0)
			f = 0;
	}
}