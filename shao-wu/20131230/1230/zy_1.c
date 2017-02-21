#include <stdio.h>

int main(void)
{
	int i, murder, flag = 0;
	for (i = 0; i <= 3; i++) {
		murder = 'A'+ i; //最初假定A是凶手
		if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D') == 3) {
			printf("凶手是: %c\n", murder);
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("未找到凶手!\n");
	}

	return 0;
}
