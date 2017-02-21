#include<stdio.h>
int foo1(void)
{

	printf("%s\n",__func__);

	return 0;
}
int foo2()
{

	printf("%s\n",__FUNCTION__);
	
	return 0;

}
int main(void)
{
	printf("hello world\n");
	foo1();
	foo2();

	return 0;
}
