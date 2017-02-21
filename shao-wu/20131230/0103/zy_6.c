#include <stdio.h>
#include <string.h>

void insert(char *s, char c, int position)
{
	char temp[strlen(s) + 2];
	strncpy(temp, s, position - 1);
	temp[position - 1] = c;
	temp[position] = '\0';
	//printf("temp = %s\n", temp);
	//strncat(temp, s + position - 1, strlen(s) - position + 1); //或者使用下面的函数
	strcat(temp, s + position - 1);
	strcpy(s, temp);
}

int main(void)
{
	char s[100], c;
	puts("请输入一个字符串：");
	gets(s);
	printf("请输入一个字符：");
	scanf("%c", &c);
	int n;
	printf("请输入一个要插入的位置：");
	scanf("%d", &n);

	insert(s, c, n);
	printf("insert, s = %s\n", s);
	
	return 0;
}
