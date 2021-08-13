#include <stdio.h>
int main()
{
    int a, b, hcf;
    printf("Enter the first number -->  ");
    scanf("%d", &a);
    printf("Enter the second number -->  ");
    scanf("%d", &b);
    int min = (a < b) ? a : b;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("The HCF of the numbers is %d", hcf);
    return 0;
}