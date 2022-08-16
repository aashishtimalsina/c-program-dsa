#include <stdio.h>
int gcd(int , int );
int main()
{
	int a,b,c;
	float d;
	printf("Enter two positive integers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("GCD(%d, %d) = %d\n", a, b,gcd(a,b));
	return 0;
}
int gcd(int a, int b)
{
	if (b == 0)
		return a;
    else
        return gcd(b,a%b);
}
