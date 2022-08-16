#include<stdio.h>
main()
{
void print(int );
print(10);
}
void print(int n)
{
    if (n < 0)
       return;
    printf("\t%d\n",n);
    // The last executed statement is recursive call
    print(n-1);
}
