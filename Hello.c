#include <stdio.h>

int main(){

    greeting("Developer A,B,C !!");
    printf("Hello, Git collabaration!\n");
    return 0;
}
// Print a greeting message for the specified user
int greeting(const char *name)
{
printf("Hello, %s!\n", name);
return 0;
}