#include <stdio.h>

int main(void)
{
	long age; 
	int min, max, cnt = 0;
	printf("由年龄的平方是三位数来确定可能的年龄范围：\n");
	for (age = 1; age * age <= 999; age++) {
		if (age * age >= 100) {
			if (cnt == 0) {
				min = age;
			}
			cnt++;
		}
	}
	max = age - 1;
	printf("min = %d, max = %d\n", min, max);

	cnt = 0;
	printf("由年龄的立方是四位数来确定可能的年龄范围：\n");
	for (age = min; age <= max; age++) {
		if ((age * age * age >= 1000) && (age * age * age <= 9999)) {
			if (cnt == 0) {
				min = age;
			}
			cnt++;
		} else {
			break;
		}	
	}
	max = age - 1;
	printf("min = %d, max = %d\n", min, max);

	cnt = 0;
	printf("由年龄的四次方是六位数来确定可能的年龄范围：\n");
	for (age = min; age <= max; age++) {
		if ((age*age*age*age >= 100000) && (age*age*age*age <= 999999)) {
			if (cnt == 0) {
				min = age;
			}
			cnt++;
		}
	}
	max = age - 1;
	printf("min = %d, max = %d\n", min, max);

	printf("最终符合条件的年龄是：\n");
	int n3, n4 , a[10] = {0}, b[10] = {0}, i;
	for (age = min; age <= max; age++) {
		n3 = age * age * age;
	   	n4 = age * age * age * age;

		for (i = 3; i >= 0; i--) {
			a[i] = n3 % 10;
			n3 /= 10;
		}

		for (i = 9; i >= 4; i--) {
			a[i] = n4 % 10;
			n4 /= 10;
		}

		printf("数组a元素为: ");
		for (i=0; i<10; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");

		for (i=0; i<10; i++) {
			b[a[i]]++;
		}
	
		for (i=0; i<10; i++) {
			if (b[i] == 1) {
				if (i == 9)
					printf("找到了，年龄 = %ld\n", age);
			} else {
				printf("本次未找到符合条件的!\n");
				break;
			}
		}
	}
	
	return 0;
}
