void test(vector<word> list, int mod)
{
	int size = list.size();
	printf("%d", size);
	_getch();
	bool *arr = new bool[size];
	for (int i = 0; i < size; i++)
		arr[i] = 0;
	system("cls");
	int modTemp = mod;
	while (1)
	{
		system("cls");
		srand(time(0));
		int random = rand() % size;
		if (mod == 3 || mod == 4) {
			if (arr[random] == 1)
			{
				do {
					random++;
					if (random == size) random = 0;
				}
				while (arr[random] == 1);
			}
		}
		auto l = list.begin() + random;
		if (mod == 2) modTemp = rand() % 2;
		if (mod == 4)
			if (modTemp || modTemp == 4) printf(" %s ", l->rusWord);
			else printf(" %s ", l->engWord);
		else
			if (modTemp || modTemp == 4) printf(" %s ", l->engWord);
			else printf(" %s ", l->rusWord);
		_getch();
		if (mod == 4)
			if (modTemp || modTemp == 4) printf(" %s ", l->engWord);
			else printf(" %s ", l->rusWord);
		else
			if (modTemp || modTemp == 4) printf(" %s ", l->rusWord);
			else printf(" %s ", l->engWord);
		arr[random] = 1;
		_getch();
	}
}
