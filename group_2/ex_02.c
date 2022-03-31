#include <stdio.h>

int	main(void)
{
	int	counter;

	printf("DEC\tOCT\tHEX\tChar\n");
	printf("____________________________\n");
	counter = -1;
	while (counter++ < 9)
		printf("%d\t%o\t%x\t%c\n", counter, counter, counter, counter);
	printf("%d\t%o\t%x\t\n", counter, counter, counter);
	counter++;
	printf("%d\t%o\t%x\n", counter, counter, counter);
	counter++;
	printf("%d\t%o\t%x\n", counter, counter, counter);
	while (counter++ < 26)
		printf("%d\t%o\t%x\t%c\n", counter, counter, counter, counter);
	printf("%d\t%o\t%x\n", counter, counter, counter);
	while (counter++ < 127)
		printf("%d\t%o\t%x\t%c\n", counter, counter, counter, counter);
	printf("=========================\n");

	return (0);
}
