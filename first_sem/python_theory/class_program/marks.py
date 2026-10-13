def read_data():
    name=input("enter the name of the student:")
    roll_no=input("enter the roll number of the student:")

    subject1=float(input("enter subject marks:"))
    subject2=float(input("enter subject marks:"))
    subject3=float(input("enter subject marks:"))

    sum=subject1+subject2+subject3
    maximum_marks=100



    percentage= sum/maximum_marks*100
    avg=sum/3

 








































    print("\n----student details-----")
    print("Name:",name)
    print("roll_no:",roll_no)
    print("total marks:",sum)
    print("percentage:",percentage)
    print("average:",avg)



