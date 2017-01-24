#include <stdio.h>
#include <string.h>
#include <ctype.h>

int firstLetterIndex(char string[255], int index);

int main (void) {
	char name[255];
	scanf("%[^\n]%*c", name);


	for (int i = 0, n = strlen(name); i < n; i++) {
		if (i == 0 && name[i] != ' ') {
			printf("%c", toupper(name[i]));
		}
		else if (i > 0 && name[i] != ' ' && name[i-1] == ' ') {
			printf("%c", toupper(name[i]));
		}
	}
	printf("\n");
}
