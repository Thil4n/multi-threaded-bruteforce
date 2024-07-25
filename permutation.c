#include <stdio.h>

int main()
{
    char digits[5];

    for (int i = 0; i <= 9999; i++)
    {
        sprintf(digits, "%04d", i);

        printf("%04d/n", i);
    }

    return 0;
}