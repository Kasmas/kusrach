int inputFile(char *nameFile, vector<word> &list)
{
	FILE *fp;
	fopen_s(&fp, nameFile, "r");
	if (fp) {
		while (!feof(fp))
		{
			int i = 0;
			word temp;
			fscanf_s(fp, "%c", &temp.engWord[0]);
			for (i = 1; temp.engWord[i - 1] != '-'; i++)
				fscanf_s(fp, "%c", &temp.engWord[i]);
			temp.engWord[i - 1] = '\0';
			fscanf_s(fp, "%c", &temp.rusWord[0]);
			for (i = 1; temp.rusWord[i - 1] != '\n' && !feof(fp); i++)
				fscanf_s(fp, "%c", &temp.rusWord[i]);
			temp.rusWord[i - 1] = '\0';
			list.push_back(temp);
		}
	}
	else return 0;
	return 1;
}
