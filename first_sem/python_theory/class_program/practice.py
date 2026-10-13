
student_data1 = [ 
    ["NAME", "ROLL_NO", "MOBILE NUM", "GAMIL"],  [85, 92, 78, 81, 95]  
    ["NAME", "ROLL_NO", "MOBILE NUM", "GAMIL"],  [89, 93, 44, 87, 91]
    ["NAME", "ROLL_NO", "MOBILE NUM", "GAMIL"],  [82, 94, 55, 89, 92]   ]


personal_info = student_data1[0]
marks = student_data1[1]

total_marks = sum(marks)

print("=================================================================")
print("           MARK DETAILS          ")
print("==================================================================")
NAME=(input("NAME:"))
ROLLNO=int(input("ROLL Number:"))
mobilenum=int(input("MOBILE Number:"))
email=(input("EMAIL:"))
print("//////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\")
print(f"Subject Marks: {marks}")
print(f"Total Score:   {total_marks} / 500")
print("====================================================================")
