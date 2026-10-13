students_database = [
    ["Alice Smith", 101, "9876543210", "alice@email.com", [85, 90, 78, 92, 88]],
    ["Bob Jones", 102, "9876543211", "bob@email.com", [70, 65, 80, 75, 72]],
    ["Charlie Brown", 103, "9876543212", "charlie@email.com", [95, 98, 92, 96, 94]]
]

print("--- 3 Students table ---\n")


for student in students_database:
    
    name = student[0]
    roll_no = student[1]
    mobile = student[2]
    email = student[3]
    marks = student[4]  

    
    total_marks = sum(marks)
    
 
    print("Name: ",        name)
    print("Roll No: ",     roll_no)
    print("Mobile: ",      mobile)
    print("Email: ",       email)
    print("Subject Marks:",marks)
    print("Total Marks: ",total_marks)