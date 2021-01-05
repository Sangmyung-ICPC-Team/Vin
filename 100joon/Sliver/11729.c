#include <stdio.h>
#include <math.h>

void hanoi(int n, int a, int b, int c);

int main()
{
    int num;
    scanf("%d", &num);

    printf("%d\n", (int)pow(2, num) - 1);
    hanoi(num, 1, 2, 3);
}

void hanoi(int n, int a, int b, int c)
{
    if (n == 1)
        printf("%d %d\n", a, c);
    else
    {
        hanoi(n - 1, a, c, b);
        printf("%d %d\n", a, c);
        hanoi(n - 1, b, a, c);
    }
}