def get_student_input():
    # Get student name and marks from user input
    name = input("Name of the student is : ")
    marks = []
    for i in range(3):
        mark = float(input(f"Enter mark {i+1}: "))
        marks.append(mark)
    return name, marks
