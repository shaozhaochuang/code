#include <stdio.h>

int main(void)
{
	int day, x1, x2 = 1; //x1表示后一天的桃子个数,x2表示前一天的桃子个数
	for (day = 1; day <= 9; day++) {
		x1 = (x2 + 1)*2;
		x2 = x1;
	}
	printf("第一天摘的桃子总数是： %d\n", x1);

	return 0;
}
