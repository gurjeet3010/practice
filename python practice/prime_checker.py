def prime_checker(number):
    is_Prime = True
    if number == 1:
        is_Prime = False
    for i in range(2,number):
        if number%i == 0:
            is_Prime = False
    if is_Prime == True:
        print("It is a prime number")
    else:
        print('Not a prime number')

n = int(input('Enter a number: '))
prime_checker(n)