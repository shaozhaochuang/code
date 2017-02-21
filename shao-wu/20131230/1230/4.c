//1、从键盘输入任意三个整数作为三角形的三条边，如果能构成三角形，判断三角形的类型。

#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("请输入任意三个整数: ");
	scanf("%d%d%d", &a, &b, &c);
		
	if ((a + b > c) && (a + c > b) && (b + c > a)) { //可以构成三角形
		if ((a == b) && (a == c)) {
			printf("等边三角形!\n");
		} else if ((a == b) || (a == c) || (b == c)) {
			printf("等腰三角形!\n");
		} else if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
			printf("直角三角形!\n");
		} else if (((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) && ((a==b) || (a==c) || (b ==c))) {
			printf("等腰直角三角形!\n");
		} else {
			printf("普通三角形!\n");
		}

	} else {
		printf("不能构成三角形!\n");
	}

	return 0;
}
