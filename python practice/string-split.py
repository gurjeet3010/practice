import random
names = input("Enter everybody's name separated by comma: ")
name_list = names.split(",")
# print(name_list)
l = len(name_list)
random_choice = random.randint(0,(l-1))
print(name_list[random_choice])