#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a, b, e = 2, d = 1;
    printf("Enter number : ");
    scanf("%d%d", &a, &b);
abc:
    if (a % e == 0 && b % e == 0)
    {   a = a / e;
        b = b / e;
        d = d * e;
        goto abc;
    }
    else if (a % e == 0)
    {   a = a / e;
        d = d * e;
        goto abc;
    }
    else if (b % e == 0)
    {
        b = b / e;
        d = d * e;
        goto abc;
    }
    else if (a == 1 && b == 1)
    {
        printf("Answer  : %d", d);
        exit(0);
    }
    else
    {
        e++;
        goto abc;
    }
}
