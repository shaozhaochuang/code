#include <stdio.h>

static int leap(int year)
{
	if (!(year % 4) && (year % 100) || !(year % 400)) {
		return 1; //闰年
	} else {
		return 0;
	}
}

int which_day(int y, int m, int d)
{
	int a[2][12] = {
		{31,28,31,30,31,30,31,31,30,31,30,31},//平年 
		{31,29,31,30,31,30,31,31,30,31,30,31} //闰年
	};

	int i = 0, days = 0;
	for (; i < m - 1; i++) {
		if (leap(y)) {
			days += a[1][i];
		} else {
			days += a[0][i];
		}
	}

	days += d;

	for (i = 2011; i < y; i++) {
		if (leap(y)) {
			days += 366;
		} else {
			days += 365;
		}
	}

	return days;
}

int main(void)
{
	int y, m, d;
	printf("请输入年/月/日: ");
	scanf("%d/%d/%d", &y, &m, &d);

	int days = which_day(y,m,d);
	if ((days % 5 == 0) || (days % 5 == 4)) {
		printf("在晒网!\n");
	} else {
		printf("在打渔!\n");
	}

	return 0;
}
