customer_id = ("Alice Smith", "15-08-1995", "ABCDE1234F", 1000101)

# Mutable data (List) - Email, Contact, Address, Current Balance
customer_profile = ["alice@email.com", "+1234567890", "123 Main St", 5000.0]


# 2. Bank Operations Functions
def display_account():
    print(f"\n--- Account Details ---")
    print(f"Acc No: {customer_id[3]} | Name: {customer_id[0]} | DOB: {customer_id[1]} | PAN: {customer_id[2]}")
    print(f"Email: {customer_profile[0]} | Contact: {customer_profile[1]} | Address: {customer_profile[2]}")
    print(f"Current Balance: ${customer_profile[3]}")

def deposit(amount):
    customer_profile[3] += amount
    print(f"Successfully deposited ${amount}. New Balance: ${customer_profile[3]}")

def withdraw(amount):
    if amount <= customer_profile[3]:
        customer_profile[3] -= amount
        print(f"Successfully withdrew ${amount}. New Balance: ${customer_profile[3]}")
    else:
        print(f"Insufficient funds! Current Balance: ${customer_profile[3]}")


# 3. Demonstration of Operations
display_account()