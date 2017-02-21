#include<stdio.h>

int main()
{
	int a,b,c,t,i = 0;
	printf("please input the number:");
	scanf("%d %d %d",&a,&b,&c);
	printf("the input number is :%d %d %d\n",a,b,c);
	
	 t = (a > b) ? ((a > c) ? a : c):((b > c) ? b:c);
	printf("the max number is %d \n",t);
	
	return 0;
}
