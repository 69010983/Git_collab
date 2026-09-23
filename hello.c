#include <stdio.h>
int main(void)
{
    greeting(“Developer A,B,C !!”);
    return 0;
}
int greeting(const char *name)
{
    printf("Hello, %s!\n", name);// Print a greeting message for the specified user
    return 0;
}