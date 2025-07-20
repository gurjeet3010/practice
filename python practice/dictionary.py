student_marks : { "Jenny" : 92,"Harry" : 78,"Richa" : 52,"Aniket" : 41,"Prem" : 99,"Stuti" : 34}
    
student_grades = {}
for student in student_marks:       #Jenny
    marks = student_marks[student]      #92
    if marks > 90:
        student_grades[student] = "A+"
    elif marks > 80:
        student_grades[student] = "A"
    elif marks > 70:
        student_grades[student] = "B+"
    elif marks > 60:
        student_grades[student] = "B"
    elif marks > 50:
        student_grades[student] = "C"
    elif marks > 40:
        student_grades[student] = "D"
    else:
        student_grades[student] = 'F'
print(student_grades)
        