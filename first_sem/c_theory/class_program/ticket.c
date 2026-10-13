#include <stdio.h>
int main()
{
    int n;
    int category, discount;
    int regular = 0;
    int premium = 0;
    int recliner = 0;
    int total = 0;

    printf("expected output:\n");
    printf("enter the number of ticekts:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("enter category for ticekts %d (1/2/3):",i );
        scanf("%d", &category);

        if (category == 1)
        {
            total = total + 150;
            regular++;
        }
        else if (category == 2)
        {
            total = total + 250;
            premium++;
        }
        else if (category == 3)
        {
            total = total + 400;
            recliner++;
        }
        else
        {
            printf("invalid category!\n");
        }
    }
    printf("---final bill---\n");
    printf("regular ticekts: %d\n", regular);
    printf("premium ticekts:%d\n", premium);
    printf("recilner ticekts:%d\n", recliner);
    printf("total(before discount):%d\n", total);

    if (n >= 5)
    {
        discount = total - (total * 10 / 100);
        printf("discount applied:Yes\n");
        printf("final amount:%d\n", discount);
    }
    else
    {
        total = total;
        printf("discount applied:No\n");
        printf("final amount:%d\n", total);
    }
    return 0;
}