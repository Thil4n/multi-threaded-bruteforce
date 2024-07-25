#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSWORD_LEN 8

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("Password is required!\n");
        exit(1);
    }

    char *password = getenv("password");

    if (password == NULL)
    {
        printf("Password is not set in the env. variable\n");
        exit(1);
    }

    if (strncmp(argv[1], password, MAX_PASSWORD_LEN))
    {
        // printf("Password is wrong!\n");
        exit(1);
    }

    printf("ACCESS GRANTED\n");
    return 0;
}
