#include <stdio.h>

int fish(int n)
{
	if (n == 1) { //出口条件
		static int i = 0;
		do {
			i++;
		} while (i % 5 != 0);
		return i + 1;

	} else {
		int i = 0;
		do {
			i = fish(n - 1); //递推公式
		} while (i % 4 != 0);
		return 5 * i/4 + 1;
	}
}

int main(void)
{
	printf("总共捕了%d条鱼\n", fish(5));	

	return 0;
}
