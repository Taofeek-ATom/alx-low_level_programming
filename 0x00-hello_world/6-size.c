#include <stdio.h>
/**
* main - this is the main
* print - prints "size of data-type"
* Return: 0 always as positive
*/
int main(void)
{
	char b;
	int i;
	float d;
	long int f;
	long long int g;

	printf("size of a char is: %lu.byte(s)\n", (unsigned long)sizeof(b));
	printf("size of an int is: %lu.byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a float is: %lu.byte(s)\n", (unsigned long)sizeof(d));
	printf("size of long int is: %lu.byte(s)\n", (unsigned long)sizeof(f));
	printf("size of long long int is: %lu.byte(s)\n", (unsigned long)sizeof(g));
	return (0);
}
