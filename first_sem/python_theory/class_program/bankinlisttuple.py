
tuple=[()]
print("==================Bank Account Deatils==================")
name=input("enter name:")
pan_no=(input("enter pan number:"))
Date=input("enter date_of_birth:")
accountnum=int(input("enter account number:"))
adhar=int(input("enter adhar number:"))
email=input("enter email:")
phone=int(input("mobile:"))
adress=input("address:")
currrentbalance=int(input("current balance:"))


bank_account_data=[email,phone,adress,accountnum,(name,Date,pan_no,currrentbalance,adhar)]
print(bank_account_data)
# print("\n--- Updated Data Entry ---")
# print(bank_account_data)
#     print(f"Accumulated Total Balance: {total_balance}")
