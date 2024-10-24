#include <stdio.h>

int main()
{
    int income;
    int tax;
    printf("Enter your income: ");
    scanf("%d", &income);
    if (income < 250000)
    {
        printf("U dont have to pay tax");
    }
    else if (income < 500000)
    {
        tax = income * 0.05;
    }
    else if (income < 1000000)
    {
        tax = income * 0.20;
    }
    else if (income > 1000000)
    {
        tax = income * 0.30;
    }
    printf("The user have to pay tax %d on this income %d", tax, income);
    return 0;
}