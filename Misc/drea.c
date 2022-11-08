#include <stdio.h>

int main (void) {

	const char shaft = '=';
	int length = 0;
	int i;

	printf("\nHow big your dick?\n");
	scanf("%d", &length);

	if (length <= 0) {
		printf("\nThis is a dick measuring program, ");
		printf("I don't do coochies\n");
	}
	else if (length <= 4) {
		printf("C");
		for (i = 0; i < length; ++i) {
			printf("%c", shaft);
		}
		printf("3\n");
		printf("\nDamn, you shrimpy\n");
	}
	else if (length <= 6) {
		printf("C");
		for (i = 0; i < length; ++i) {
			printf("%c", shaft);
		}
		printf("3\n");
		printf("\nAight, you average\n");
	}
	else if ((length == 69) || (length == 420)) {
		printf("C");
		for (i = 0; i < length; ++i) {
			printf("%c", shaft);
		}
		printf("3\n");
		printf("\nNice\n");
		printf("\nBut for real, you lying\n");
	}
	else if ((length == 69420) || (length == 42069)) {
		printf("C");
		for (i = 0; i < length; ++i) {
			printf("%c", shaft);
		}
		printf("3\n");
		printf("\nSuper nice\n");
		printf("\nBut for real, you lying\n");
	}
	else if (length <= 9) {
		printf("C");
		for (i = 0; i < length; ++i) {
			printf("%c", shaft);
		}
		printf("3\n");
		printf("\nFuck, you huge\n");
	}
	else {
		printf("\nNah, you lying\n");
		printf("C");
		for (i = 0; i < length; ++i) {
			printf("%c", shaft);
		}
		printf("3\n");
	}

	return 0;

}
