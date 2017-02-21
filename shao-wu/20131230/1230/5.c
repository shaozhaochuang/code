//2、百钱买百鸡：鸡翁一，值钱5；鸡母一，值钱3；鸡雏三，值钱1。用百钱买百鸡，问翁、母、雏各几何？

#include <stdio.h>

int main(void)
{
	int i, j, k;

	//注意： (1/3*k) != (k/3)

	for (i = 0; i <= 20; i++) {
 		for (j = 0; j <= 33; j++) {
			for (k = 3; k <= 99; k+=3) {
				if ((i + j + k == 100) && (5*i + 3*j + k/3 == 100) && (k % 3 == 0))  {
					printf("cock = %d, hen = %d, chick = %d\n", i, j, k);
				}
			}
		}
	}

	return 0;
}
