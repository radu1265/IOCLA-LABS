#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	/* TODO */
	int n = 0;
	while(*str != '\0'){
		n++;
		str++;
	}
	printf("%d\n",n);
	return n;
}

void equality_check(const char *str)
{
	int n, cpn, i = 0;
	n = my_strlen(str);
	cpn = n;
	while(n)
	{
		

	}


}
int main(void)
{
	const char str[50] = "ababababacccbacbacbacbacbabc";
	my_strlen(str);
	return 0;
}

