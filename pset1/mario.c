#include <stdio.h>

void printPyramid(int height);
void printRightLine(int visibleBlocks, int height);
void printLeftLine(int visibleBlocks, int height);

int main(void)
{
	int height = -1;

	while (height > 23 || height < 0) {
		printf("Height: ");
		scanf("%i", &height);		
	}

	printPyramid(height);
}

void printPyramid(int height) {
	int visibleBlocks = 1;

	while (visibleBlocks <= height) {
		printRightLine(visibleBlocks, height);
		printf("  ");
		printLeftLine(visibleBlocks, height);
		printf("\n");
		visibleBlocks++;
	}
}

void printRightLine(int visibleBlocks, int height) {
	for (int i = 0; i < height; i++) {
		if (height - visibleBlocks > i) {
			printf(" ");
		}
		else {
			printf("#");
		}
	}
}

void printLeftLine(int visibleBlocks, int height) {
	for (int i = 0; i < height; i++) {
		if (visibleBlocks <= i) {
			printf(" ");
		}
		else {
			printf("#");
		}
	}
}