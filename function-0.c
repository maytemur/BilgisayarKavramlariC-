#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>


// prototype
void PrintName(string name);

int main(void)
{
    printf("Your name: ");
    string s = GetString();
    PrintName(s);
}

/**
 * Says hello to someone by name.
 */
void PrintName(string name)
{
    printf("hello, %s\n", name);
}
