#include <stdio.h>

void printRightPyramid(int height);
void printLine(int visibleBlocks, int height);

int main(void)
{
	int height = -1;

	while (height > 23 || height < 0) {
		printf("Height: ");
		scanf("%i", &height);		
	}

	printRightPyramid(height);
}

void printRightPyramid(int height) {
	height++;
	int visibleBlocks = 2;

	while (visibleBlocks <= height) {
		printLine(visibleBlocks, height);
		printf("\n");
		visibleBlocks++;
	}
}

void printLine(int visibleBlocks, int height) {
	for (int i = 0; i < height; i++) {
		if (height - visibleBlocks > i) {
			printf(" ");
		}
		else {
			printf("#");
		}
	}
}