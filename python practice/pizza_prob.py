size = input("What size pizza you want(S/M/L)? ")
bill = 0
if size == 's' or size == "S":
    bill = bill + 100
    print("Small Pizza is 100 Rs.")
elif size == 'm' or size == "M":
    bill += 200
    print("Medium Pizza is 200 Rs.")
elif size == 'l' or size == "L":
    bill += 500
    print("Large Pizza is 500 Rs.")
else:
    print("Please enter correct option")
    
add_pepperoni = input("Do you want pepperoni(Y/N)? ")
if add_pepperoni == 'y' or add_pepperoni == "Y":
    if size == 's' or size == "S":
        bill += 30
    else:
        bill += 50

extra_cheeze = input("Do you want extra cheeze(Y/N)? ")
if extra_cheeze == 'y' or extra_cheeze == "Y":
        bill += 20
   
print(f"Your final bill is {bill}")