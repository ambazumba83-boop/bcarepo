#include <stdio.h>
int main() 
{
    float principal = 1000.0;
    float rateOfInterest = 5.0; // percent per year
    int years;
    float amount = principal;
    float interest;
    printf("Enter number of years: ");
    scanf("%d",&years);
    printf("---- Interest Growth ----\n");
    for (int year = 1; year <= years; year++)
    {
       interest = amount * rateOfInterest / 100;
       amount = amount+interest;
        printf("year %d: Interest = %f\n",years,interest);
        printf("--------------------------\n");
    }    
        printf("Final amount after %d years: Rs.%.2f\n", years, amount);
    return 0;
}