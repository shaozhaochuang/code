/*
1、已知某公司员工的工资底薪为500元，员工销售的软件金额与提成方式如下：
	销售额<=2000，没有提成
	2000<销售额<=5000, 提成8%
	5000<销售额<=10000, 提成10%
	销售额>10000，提成12%
	
	输入销售额，求员工的工资。
*/

#include <stdio.h>
int main(void)
{
	float base_salary = 500; //底薪

	int sales; //销售额
	printf("请输入销售额: ");
	scanf("%d", &sales);

	int k; //销售系数
	if ((k = sales % 1000) == 0) {
		k = sales/1000; 
	} else {
		k = sales/1000 + 1;
	}

	switch (k) {
	case 0 ... 2:
		printf("工资是： %f\n", base_salary);
		break;
	case 3 ... 5:
		printf("工资是： %f\n", base_salary += sales * 0.08);
		break;
	case 6 ... 10:
		printf("工资是： %f\n", base_salary += sales * 0.1);
		break;
	default:
		printf("工资是： %f\n", base_salary += sales * 0.12);
	}

	return 0;
}
