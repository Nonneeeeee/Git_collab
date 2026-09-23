#include <stdio.h>

int main(){

    greeting("Developer A,B,C !!");
    printf("Hello, Git collabaration!\n");
    return 0;
}

int greeting(const char *name)
{
printf("Hello, %s!\n", name);
return 0;
}