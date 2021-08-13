#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number -->  ");
    scanf("%d", &a);
    printf("Enter the second number -->  ");
    scanf("%d", &b);
    int i = 0, fact = 1;
    while (fact)
    {
        i++;
        if (i % a == 0 && i % b == 0)
        {
            fact = 0;
        }
    }
    printf("The LCM of the number is %d", i);
    // We can also find HCF using the formula a * b = LCM * HCF. But this formula is only valid for two numbers.
    return 0;
}