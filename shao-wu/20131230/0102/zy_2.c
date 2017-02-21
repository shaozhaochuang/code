#include <stdio.h>

char * reverse_order(char *p, int n)
{
	char *s = p, *t = p + n - 2, *tmp = p+n-1;
	//char *q = p + n/2 - 1;
	//for ( ; s <= q; s++, t--) {
	for ( ; s <= t; s++, t--) {
		*tmp = *s;
		*s = *t;
		*t = *tmp;
		printf("*s = %c, *t = %c\n", *s, *t);
	}
	*(p + n - 1) = '\0';
	return p;
}

int main(void)
{
	char s[] = "123456";
	char *p = reverse_order(s, sizeof(s)/sizeof(*s));

	printf("s = %s\n", s);
	return 0;
}
