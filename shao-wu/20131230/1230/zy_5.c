#include <stdio.h>

int main(void)
{
	int a1 = 1, a2 = 1, a3;
	int n = 0;
	printf("%10d %10d ", a1, a2);
	for (n = 3; n <= 30; n++) {
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
		printf("%10d ", a3);
		if (!(n%5)) {// n%5==0
			printf("\n");
		}
	}

	return 0;
}
