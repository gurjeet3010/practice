num = input("Enter list of numbers: ")
numlist = num.split()
count = 0
for number in numlist:
    count += 1
print(f"The length of the list is: {count}")

for i in range(count):
    numlist[i] = int(numlist[i])
maximumNum = numlist[0]
for number in numlist:
    if number > maximumNum:
        maximumNum = number
print(f"The maximum number is: {maximumNum}")