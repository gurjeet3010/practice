from string import ascii_lowercase

def check_string(my_string):
    # Your code goes here
    missing = ""
    for l in ascii_lowercase:
        if l not in my_string.lower():
            missing+=l
        
    if len(missing) > 0:
        print(f"The string is missing the following letters : {missing}")
    else:
        print("The string contains all the letters of the alphabet.")
        
str1 = "How quickly jumping zebras vex."
str2 = "Sphinx of black quartz, judge my vow."
result1 = check_string(str1)
result2 = check_string(str2)