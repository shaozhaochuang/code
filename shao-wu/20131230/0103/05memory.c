#include <stdio.h>

//bss: block started by symbol
int a; //.bss
int a1 = 0; //.bss
int a2 = 20; //.data
static int sa; //.bss
//int s[100000000] = {10}; //.data

//小端：数据的低位存放在内存的低地址上的架构被称为小端架构
//大端：数据的低位存放在内存的高地址上的架构被称为小端架构
int endian(int *p)
{
#if 0
	if (*(char *)p == 0x78) {
		return 1;
	} else {
		return 0;
	}
#endif

	return *(char *)p == 0x78;
}

int main(void)
{
	int a = 0;  //stack 
	auto int b; //<==> int b;

	static int sa; //.bss
	printf("sa = %d\n", sa);

	static int sa1 = 0; //.bss
	static int sa2 = 10; //.data

	int aa = 0x12345678;
	printf("our cpu frame is %s\n" , endian(&aa) ? "little_endian": "big_endian");

	return 0;
}
