from input import get_student_input
from database import add_student, get_all_students
from analysis import calculate_average, assign_grade
from report import print_report

def main():
    while True:
        name, marks = get_student_input()
        add_student(name, marks)
        cont = input("Add another student? (y/n): ")
        if cont.lower() != "y":
            break
    print_report(get_all_students(), calculate_average, assign_grade)

if __name__ == "__main__":
    main()