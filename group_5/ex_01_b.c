#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*c;

	a = 4;
	b = 3;
	c = &a;
	*c = *c + 1;
	c = &b;
	b = b + 4;
	printf("\n\n%d %d %d\n\n", a, b, *c);

	// spoiler alert *********************************************





















































// 4, 7, 7 (error: I missed in my first try, because I don't realize
// that 'int *c' pointer to 'int a' content, and on next line
// increment by 1.)

// a = 4;
// 	b = 3;
// 	c = &a; // 'int c' now has the value of 'int a' then 'int c = 4'
// 	*c = *c + 1; // 'int *c' now increment by 1 then 'int a = 5'
// 	c = &b; // 'int c' receive the value of 'int b' then 'int c = 3'
// 	b = b + 4; // 'int b' = 7 then new 'int *c' is the same of 'int b'

// the correct result is 5, 7, 7.
}
