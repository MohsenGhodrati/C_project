#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int MyEditor(char *FileName)
{
	if(system("gnome-terminal -x ./MyEditor") == 0)
		return 1;
	else
		return 0;
}

int main()
{
	char *FileName;
	scanf("%s", FileName);
	int n = 1;

	if(n == 1)
		if(MyEditor(FileName) == 1)
			printf("...\nEditor is closed correctly.\n");
		else
			printf("...\nEditor stopped working.\nPlease try again...\n");

	return 0;
}