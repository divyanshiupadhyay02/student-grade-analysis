def print_report(students, calc_avg, assign_grd):

    #creating report of students
    print("\nStudent Grade Report")
    for name, marks in students.items():
        avg = calc_avg(marks)
        grade = assign_grd(avg)
        print(f"{name} - Average: {avg:.2f}, Grade: {grade}")