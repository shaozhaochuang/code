#include <stdio.h>

static size_t my_strlen(const char *s)
{
	size_t count = 0;
	while (*s++) { //<==> while (*s++ != '\0')
		count++;
	}
	return count;
}

static char *my_strcpy(char *dest, const char *src)
{
	if (!src || !dest) {
		return NULL;
	}

	char *tmp = dest;
	while (*dest++ = *src++)
		;
	return tmp;
}

static char *my_strncpy(char *dest, const char *src, size_t n)
{
	if (!src || !dest) {
		return NULL;
	}

	char *psave = dest;
	while (n--) {
		if (*src != '\0') {
			*dest++ = *src++;
		} else {
			break;
		}
	}
	*dest = '\0';

	return psave;
}

static char *my_strcat(char *dest, const char *src)
{
	char *tmp = dest;
	while (*dest) {
		dest++;
	}

	while (*dest++ = *src++);
	return tmp;
}

static char *my_strncat(char *dest, const char *src, size_t n)
{
	char *tmp = dest;
	while (*dest) {
		dest++;
	}

	while (*src) {
		if (n--) {
			*dest++ = *src++;
		} else {
			break;
		}
	}	
	*dest = '\0';

	return tmp;
}

static int my_strcmp(const char *s1, const char *s2)
{
	while (1) {
		if (*s1 > *s2) {
			return 1;
		} else if (*s1 < *s2) {
			return -1;
		} else {
			if (*s1 == '\0') {
				return 0;
			}
		}
		s1++;
		s2++;
	}
}

static int my_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--) {
		if (*s1 - *s2 != 0) {
			return (*s1 - *s2) > 0 ? 1 : -1;		
		} else {
			if (*s1 == '\0') {
				return 0;
			}
		}
		s1++;
		s2++;
	}
	return 0;
}

int main(void)
{
	char s[] = "abcedf";
	printf("strlen s = %d\n", my_strlen(s));
	
	char t[sizeof(s)];
	printf("t = %s\n", my_strcpy(t, s));
	printf("t = %s\n", my_strncpy(t, s, 3));
	
	char t2[sizeof(s) + sizeof(t)] = "hello";
	printf("t2 = %s\n", my_strcat(t2, s));
	
	char t3[sizeof(s) + sizeof(t)] = "hello";
	printf("t3 = %s\n", my_strncat(t3, s, 3));

	char *t4 = "hello";
	char *t5 = "hello12";
	printf("strcmp: %d\n", my_strcmp(t4, t5));
	printf("strncmp: %d\n", my_strncmp(t4, t5, 5));

	return 0;
}
