#include <stdio.h>

void sort(int *a, int m, int n)
{
	int *p, *q;
	for (p = a; p < a+m; p++) {
		if (*p >= n) {
			q = p;
			break;
		} else {
			if (p == a+m-1) {
				*p = n;
				return;
			}
		}
	}
	for (p = a+m; p >= q; p--) {
		*p = *(p - 1);
	}
	*q = n;
}

int main(void)
{
	int a[10] = {1,2,3,4,5,6,7,8,9};
	sort(a, 10, 10);

	int i = 0;
	for (; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
