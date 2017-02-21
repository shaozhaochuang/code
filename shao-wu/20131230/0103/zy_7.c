#include <stdio.h>

void bubble_sort(int *s, int n)
{
	int i, j, tmp;
	for (i=0; i<n-1; i++) {
		for (j=0; j<n-1-i; j++) {
			if (*(s + j) > *(s + j + 1)) {
				tmp = *(s+j);
				*(s+j) = *(s+j+1);
				*(s+j+1) = tmp;
			}
		}
	}
}

int main(void)
{
	int s[] = {23,12,0,7,4,2,5,30,11,1};
	int n = sizeof(s)/sizeof(*s);
	bubble_sort(s, n);
	int i = 0;
	for (; i < n; i++) {
		printf("%d ", s[i]);
	}
	printf("\n");

	return 0;
}
