#Program to demonstrate real python string processing to clean and transform
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR    
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name,email,phone,=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]

first,last=name.split()[1],name.split()[1]
initials=first[0].upper()+last[0].upper()
print('============================================')
print('PROFILE CARD')
print('============================================')
print('Name    :',name.strip().title().replace("  ",""))
print('initials:',initials)
print('Email   :',email.lower())
print('Phone   :',phone.replace("+91-98765-4","*********"))
#print('Phone   :',phone.replace("-",""))
#phone=phone[3:]
#len=phone.__len__()
if len(phone) == 13:
    print("Valid input")
else:
    print("Invalid input")