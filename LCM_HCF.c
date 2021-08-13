// In this C program you can find LCM and HCF of any number of terms. We will use array here.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms :  ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], hcf;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    for (int i = 1; i <= min; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                count++;
            }
        }
        if (count == n)
        {
            hcf = i;
        }
    }
    printf("The HCF is %d\n", hcf);

    // Now code for finding LCM
    int i = 0, fact = 1;
    while (fact)
    {
        int count = 0;
        i++;
        for (int j = 0; j < n; j++)
        {
            if (i % arr[j] == 0)
            {
                count++;
            }
        }
        if (count == n)
            fact = 0;
    }
    printf("The LCM is %d", i);
    return 0;
}