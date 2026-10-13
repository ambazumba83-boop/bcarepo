int main() {
    int years;
    double principal = 1000.00;
    double rate = 0.05; // 5% interest rate
    double interest, amount;

    // Prompt user for input
    printf("Enter number of years: ");
    if (scanf("%d", &years) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("---- Interest Growth ----\n");
    {
    for (int i = 1; i <= years; i++) 
        interest = principal * rate;
        amount = principal + interest;

        printf("Year %d: Interest = Rs.%.2f | Amount = Rs.%.2f\n", i, interest, amount);
         principal = amount;
    }

    return 0;
}
