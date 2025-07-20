# is and is not are two identity operators

a = 256
b = 642
c = 256

print(a is b)       #is returns if both the operands pointing to same object(i.e, same memory locations) 
print(a is not b)   #is not returns if both the operands pointing to same object(i.e, same memory locations) 

print(a is c)
print(id(a),id(b),id(c))            #id() is used to find the memory address of object