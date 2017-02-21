#include <stdio.h>

int main(void)
{
	char *s[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

	int day;
	printf("请输入一个整数（1-7）: ");
	scanf("%d", &day);

	printf("%s\n", *(s + day - 1));

	return 0;
}
