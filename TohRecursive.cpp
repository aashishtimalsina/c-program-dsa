#include <stdio.h>
void toh(int, char, char, char);
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    toh(n, 'S', 'D', 'A');
    return 0;
}
void toh(int n, char source, char dest, char aux)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", source, dest);
        return;
    }
    toh(n - 1, source, aux, dest);
    printf("\n Move disk %d from peg %c to peg %c", n, source, dest);
    toh(n - 1, aux, dest, source);
}
