#include <stdio.h>

int power(int x, int n)
{
    int base;

    if (n <= 1)
        return (x);
    else
      base = x * power(x, n -1);
    return (base);
}

int main(void)
{
    printf("%d", power(2, 13));
    return (0);
}