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
	printf("������� ��� �����, � ������� ������ ��������: ");
	scanf_s("%s", nameFile, N);
	if (!inputFile(nameFile, list)) { printf("���� �� ������ :(\n"); system("pause"); return 1; }
	else (system("cls"));
	printf("�������� ���:\n 1) ���� - ���\n 2) ��� - ����\n 3) ������\n 4) ��� �����(��� -����)\n 5) ��� �����(���� - ���)\n");
	int mod;
	scanf_s("%d", &mod);
	mod--;
	test(list, mod);
	system("pause");
}
