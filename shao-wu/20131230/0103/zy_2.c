#include <stdio.h>

int Find2ndMax(int arr[], int len)
{
	int max1 = arr[0], max2 = arr[1];
	int i;
	for (i=1; i<len; i++) {
		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];
		} 
		else if (arr[i] > max2) {
			max2 = arr[i];
		}
	}

	printf("最大元素 max1 = %d\n",max1);
	return max2;
}


int main(void)
{
	int a[] = {112,223,8,3,4,114,116,207,9,7,200};
	int n = sizeof(a)/sizeof(a[0]), i;
	printf("数组元素为: ");
	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("其中第二大元素是：%d\n", Find2ndMax(a, n));

	return 0;
}
