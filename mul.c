#include <stdio.h>
int mulFunc(int a, int b);
int mul()
{
    int n1, n2;
    printf("Please enter n1:");
    scanf("%d", &n1);
    printf("Please enter n2:");
    scanf("%d", &n2);
    mulFunc(n1, n2);
    return 0;
}

int mulFunc(int a, int b)
{
    int  mul  = a * b;
    printf("Sub:%d x %d = %d", a, b, mul);
}