#include <stdio.h>

static char *m_strreverse(char *s)
{
	char *head = s;
	char *tail = s;

	while (*tail) {
		tail++;
	}
	tail--;

	char tmp = 0;
	for (; head < tail; head++, tail--) {
		tmp = *head;
		*head = *tail;
		*tail = tmp;
	}

	return s;
}

int main(void)
{
	char s1[] = "hello";

	printf("strreverse: %s\n", m_strreverse(s1));

	return 0;
}
