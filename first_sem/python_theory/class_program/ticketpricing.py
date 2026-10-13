age=int(input("Enter Your Age:")) 
day=input("enter the day of the week(e.g., monday, saturday):")
weekend=("saturday,sunday")
ticket_price = 250

if age < 5:
    price=(ticket_price*50/100)
    category = "child"
else:
    price=(ticket_price*50/100)
    category = "senior Citizen"
if weekend:
    final_price = ticket_price
    day_type = "weekend"
else:
    final_price = ticket_price 
    day_type = "weekday"
print(f"\ncategory : {category}")
print(f"day_type: {day_type}")
print(f"final ticket price: {final_price}")


