#include <stdio.h>

void merge_sort(int *s, int n)
{
	if (n <= 1) { //出口条件
		return;
	}

	int m = n/2, l = 0, r = m; //m是中间某元素的下标
	if (l < m && r < n) {
		merge_sort(s, m); //中间元素的左半部递归
		merge_sort(s+m, n-m); //中间元素的右半部递归
	}

	int temp[n], i = 0; //变长数组，用来临时存放已经排好序的元素
	for (; l < m && r < n; i++) {
		if (*(s+l) <= *(s+r)) {
			temp[i] = s[l++];
		} else {
			temp[i] = s[r++];
		}
	}
	while (l < m) { //左半部分没拷完
		temp[i++] = s[l++];
	} 
	while (r < n) { //右半部分没拷完
		temp[i++] = s[r++];
	}	

	for (i=0; i<n; i++) {
		s[i] = temp[i];
	}
}

int main(void)
{
	int s[] = {23,12,0,7,4,2,5,30,11,1};
	int n = sizeof(s)/sizeof(*s);
	merge_sort(s, n);
	int i = 0;
	for (; i < n; i++) {
		printf("%d ", s[i]);
	}
	printf("\n");
	
	return 0;
}
