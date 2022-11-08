#include <stdio.h>

int main (void) {

	int height = 0;
	int floor = 1;
	int people = 0;
	int i;
	int stepCounter = 0;

	printf("\nHow many floors are there?\n");
	scanf("%d", &height);

	int shaft[height];

	for (i = 0; i < height; ++i) {
		shaft[i] = 0;
	}

	shaft[0] = 1;

	while (floor > 0) {
		printf("\n");
		for (i = (height - 1); i >= 0; --i) {
			if (shaft[i]) {
				printf("[%d]\n", people);
			}
			else {
				printf(" | \n");
			}
		}
		for (i = 0; i < height; ++i) {
			shaft[i] = 0;
		}
		printf("\nWhat floor?\n");
		scanf("%d", &floor);
		shaft[floor - 1] = 1;
	}

	return 0;

}
