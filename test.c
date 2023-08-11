#include <stdio.h>
int main()
{

    int a = 0;
    int c;

    // Pre Increment
    c = ++a;
    // Post Increment
    c = a++;

    printf("c- %d a- %d\n", c, a);
    return 0;
}