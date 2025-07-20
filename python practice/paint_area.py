import math
def paint_calc(height,width,cover):
    area = h * w
    no_of_cans = round(area/cover)
    print(f'You will need {no_of_cans} cans of paint.')

h = int(input("Enter height of the room: "))
w = int(input("Enter width of the room: "))
coverage = 7
paint_calc(width = w, height = h, cover=coverage)
