units=float(input("enter number of unit consumed:"))
category= input("enter which category you belong:")
threshold= (input("is peak threshold found[yes/no]"))
penalty=100
penalty_noncom=50
if category == "commercial":
    if units <= 100:
        bill = units * 10 + penalty
    elif units <= 300:
        bill = units * 12 + penalty
    else:
        units >300
        bill = units * 15
    if threshold == "yes" :
        bill=bill+ penalty
    else:
        bill=bill
    print("bill amount",bill)
else:
    if units <=100:
        bill = units * 5
    elif units <=300:
        bill = units *6
    else:
        units >300
        bill = units *8
        if threshold =="yes" :
            bill=bill+ penalty_noncom
        else:
            bill=bill    
            if bill > 500:
                discount=bill*0.10
                bill=bill-discount
                print("you recived a 10% discount of",discount)
        print("bill amount",bill)
              


     