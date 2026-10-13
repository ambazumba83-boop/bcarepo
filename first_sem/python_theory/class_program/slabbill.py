def calculate_bill(units, category, peak_threshold, paid_before_due):
   category = category.strip().lower()

    units = float(input("Units consumed: "))
    category = input("Category (Commercial/Non-Commercial): ")
    peak_threshold = (input("Peak threshold: "))
    paid_before_due = input("Paid before due date? (yes/no): ").strip().lower() == "yes"
    calculate_bill(units, category, peak_threshold, paid_before_due)


    # ---- Slab-wise rate calculation ----
    if category == "commercial":
        if units <= 100:                         
            bill = units * 10
        elif units <= 300:
            bill = (100*10) + ((units-100)*12)
        else:
            bill = (100*10) + (200*12) + ((units-300)*15)
    elif category == "non-commercial":
        if units <= 100:
            bill = units * 5
        elif units <= 300:
            bill = 100*5 + (units-100)*6
        else:
            bill = (100*5) + (200*6) + ((units-300)*8)
    else:                                                    
        print("Invalid category")
        return

    # ---- Peak surcharge (logical operator) ----
    peak_exceeded = category == "commercial" and units > peak_threshold  
    if peak_exceeded:
        bill += 0.10 * bill

    # ---- Discount or Penalty ----
    if paid_before_due:
        bill -= 0.05 * bill
    else:
        bill += 100 if category == "commercial" else 50

    print(f"Is peak threshold exceeded? {'Yes' if peak_exceeded else 'No'}")
    print(f"Final Bill: Rs {bill:.2f}")
    return bill

