#include <stdio.h>

void clear_line2(int m, int n, int (*a)[n], int j)
{
	int (*p)[n] = a;
	for (; p < a+m; p++) {
		*(*p + j) = 0;
	}
}

int main(void)
{
	int a[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

	int j;
	printf("please input the line(0~3) you want to clear: ");
	while ((scanf("%d", &j)!=1) || ((j < 0) || (j > 3))) {
		printf("please input the line(0~3): ");
	}
	clear_line2(3, 4, a, j);
	
	int k;
	for (j=0; j<3; j++) {
		for (k=0; k<4; k++) {
			printf("%2d ", a[j][k]);
		}
		printf("\n");
	}

	return 0;
}
