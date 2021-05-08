#include <stdio.h>

int main()
{
	FILE *fp = fopen("F:\\gitTest\\g.txt", "r+");
	char buf[255][255];
	int cnt = 0;
	//printf("%d\n",fp->_file);
	for (int i = 0; !feof(fp); i++) {
		fgets(buf[i], 255, fp);
		printf("%s", buf[i]);
		//printf("%d\n",fp->_file);
	}
	//printf("%d\n",fp->_file);
	fclose(fp);
	fp = fopen("F:\\gitTest\\g.txt", "r+");

	for (int i = 0; !feof(fp); i++) {
		for (int j = 0; buf[i][j] != '\n'; j++) {
			if (fscanf(fp, "%s", buf[0]) == 1) {
				cnt++;
			}

		}
	}
	printf("\n\n%d\n", cnt);
}
