#include <stdio.h>
int x = 50;

int main(void)
{
        int x = 100;
        {
                extern int x;
                printf("x= %d\n", x);
        }
        return 0;
}