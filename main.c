#include <stdio.h>

int myfunc(int x, int y)
{
    int z;

    z = 2 * x - y;
    return z;
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b, c;

    c = a[1] + a[5];

    b = c + a[1];

    b = myfunc(b, c);

    printf("b=%d\n", b);

    return 0;
}
