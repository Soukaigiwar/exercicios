#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;
	int	*f;

	a = 4;
	b = 3;
	c = &a;
	d = &b;
	*c /= 2;
	f = c;
	c = d;
	d = f;
	printf("\n\n%d %d\n\n", *c, *d);

	// spoiler alert *********************************************























































// the correct result is 3, 2.
}
