#include <stdio.h>
// lecture 56
void print(int a)
{
    if (a > 0)
    {
        // printf("%d", a);
        print(a - 1);
        printf("%d", a);
    }
}
int main()
{
    print(3);
    return 0;
}