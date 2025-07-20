import random
letters = ['a','b','c','d','e','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
number = ['0','1','2','3','4','5','6','7','8','9']
symbols = ['!','@','#','$','%','^','&','*','(',')','-','+']
print("Welcome to Password Generator!")
n_letter = int(input("How many letters you want?\n"))
n_numbers = int(input("How many numbers you want?\n"))
n_symbols = int(input("How many symbols you want?\n"))
password = ""
for i in range(1,n_letter+1):
    char = random.choice(letters)
    password += char
for i in range(1,n_numbers+1):
    num = random.choice(number)
    password += num
for i in range(1,n_symbols+1):
    sym = random.choice(symbols)
    password += sym
    
print(password)