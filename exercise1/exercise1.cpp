#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Rus"); //Для вывода на русском языке

	int a[10], n, f;

	printf("Введите количество элмементов последовательности: ");
	scanf("%d", &n);

	//Ввод последовательнсоти
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	f = 1;

	for (int i = 0; i < 9 && f; i++) {
		if (a[i] % 2 == 1 && a[i + 1] % 2 == 0)
			f = 0;
	}
}