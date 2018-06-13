#include <stdio.h>
#include <iostream>
#include <ctime>
#include <vector>
#include <string.h>
#include <conio.h>

#define N 100

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char nameFile[N];
	vector<word> list;
	printf("Введите имя файла, с которым хотите работать: ");
	scanf_s("%s", nameFile, N);
	if (!inputFile(nameFile, list)) { printf("Файл не найден :(\n"); system("pause"); return 1; }
	else (system("cls"));
	printf("Выберите мод:\n 1) Англ - Рус\n 2) Рус - Англ\n 3) Рандом\n 4) Все слова(Рус -Англ)\n 5) Все слова(Англ - Рус)\n");
	int mod;
	scanf_s("%d", &mod);
	mod--;
	test(list, mod);
	system("pause");
}
