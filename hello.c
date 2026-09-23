#include <stdio.h>
int farewell(const char *name)// Print a farewell message for the specified user
{
    printf("Goodbye, %s!\n", name);
    return 0;
}
int main(void)
{
    greeting("Developer A,B,C !!");
    farewell("Developer A,B,C");
    return 0;
}
int greeting(const char *name)
{
    printf("Hello, %s!\n", name); // Print a greeting message for the specified user
    return 0;
}