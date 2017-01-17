#include <stdio.h>

int coins(int cost, int change);
int restChange(int coins, int cost, int change);
int nextCost(int cost);

int main(void) {
	printf("O hai! How much change is owed?\n");
	float change = 0.0;
	do {
		scanf("%f", &change);	
	} while (change < 0.0);
	

	int totalCoins = 0;
	int changeInCents = change * 100;
	
	int cost = 25;
	while (changeInCents != 0) {
		int coinsCount  = coins(cost, changeInCents);
		changeInCents = restChange(coinsCount, cost, changeInCents);
		totalCoins += coinsCount;
	 	cost = nextCost(cost);
	}

	printf("%i\n", totalCoins);
}

int coins(int cost, int change) {
	return change / cost;
}

int restChange(int coins, int cost, int change) {
	return change - coins * cost;
}

int nextCost(int cost) {
	int next;
	switch(cost) {
		case 25:
			next = 10;
			break;
		case 10:
			next = 5;
			break;
		case 5:
			next = 1;
			break;
		default:
			next = 0;
			break;
	}	
	return next;
}
