#include <stdio.h>

char *my_strcpy(char *dest, const char *src)
{
	char *psave = dest;
#if 0
	//或者按第13行的写法
	while (*dest = *src) {
		dest++;
		src++;
	}
#endif
	while (*dest++ = *src++) {}
	return psave;
}

int main(void)
{
	const char s[] = "hello";
	char t[sizeof(s)/sizeof(*s)];

#if 0
	char *s = (char *)malloc(sizeof("hello"));
	strcpy(s, "hello");
	char *t = (char *)malloc(sizeof("hello"));
#endif

	printf("t = %s\n", my_strcpy(t, s));

	return 0;
}
