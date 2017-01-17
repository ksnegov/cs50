#include <stdio.h>

int main(void)
{
	float galonesPerMinute = 1.5;
	float ouncesPerMinute = 128 * galonesPerMinute;	
	int ouncesInBottle = 16;
	
	int minutes = 0;

	printf("Minutes: ");
	scanf("%i", &minutes);

	int bottles = ouncesPerMinute * minutes / ouncesInBottle;

	printf("Bottles: %i\n", bottles);
}