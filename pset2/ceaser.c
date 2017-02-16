#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char cryptLetter(char letter, int key);

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		printf("You should provide a non-negative integer command-line argument\n");
		return 1;
	}

	int k = atoi(argv[1]);
	char plaintext[255];
	char ciphertext[255];

	printf("plaintext: ");
	scanf("%[^\n]%*c", plaintext);

	for (int i = 0, n = strlen(plaintext); i < n; i++) {
		ciphertext[i] = cryptLetter(plaintext[i], k);
	}
	
	printf("ciphertext: %s\n", ciphertext);
	return 0;
}

char cryptLetter(char letter, int key) {
	int startPositionInASCII = 0;
	if (letter >= 'A' && letter <= 'Z') {
		startPositionInASCII = 65;
	}
	else if (letter >= 'a' && letter <= 'z') {
		startPositionInASCII = 97;
	}
	else {
		return letter;
	}

	char crypt = (letter - startPositionInASCII + key) % 26;
	return startPositionInASCII + crypt;
}
