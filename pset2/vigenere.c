#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		printf("You should provide a non-negative integer command-line argument\n");
		return 1;
	}

	char k[255];
	strcpy(k, argv[1]);

	char plaintext[255];
	char ciphertext[255];

	printf("plaintext: ");
	scanf("%[^\n]%*c", plaintext);

	printf("ciphertext: %s\n", k);
	return 0;	
}