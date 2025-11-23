📌 Overview

The Student Grade Management System is a Python-based console application designed to collect student information, calculate average marks, assign grades, and generate a complete grade report.
The project is modular, meaning different tasks are handled by separate Python files (input, database, analysis, and report), making the code clean, organized, and easy to maintain.
✨ Features

Takes multiple students’ names and marks as input.

Calculates the average of three marks.

Assigns grades (A, B, C, D, F) based on the average.

Stores student records in a dictionary.

Displays a formatted report of all students with averages and grades.

User-friendly loop to add multiple students.

Fully modular program structure.
🛠 Technologies / Tools Used

Python 3.x

Built-in Python functions and modules

Console/Terminal interface
(No external libraries required)
📥 Steps to Install & Run the Project
1. Install Python

Make sure Python 3.x is installed on your system.

Check using:

python --version

2. Create Project Folder

Create a folder and add these files:

input.py
database.py
analysis.py
report.py
main.py

3. Run the Program

Open your terminal / command prompt inside the project folder and run:

python main.py

4. Enter Student Details

Enter student name

Enter three marks

Choose whether to add more students
🧪 Instructions for Testing

To test the program:

✔ Test Case 1: Single Student

Input:

Name: Riya

Marks: 90, 95, 92
Expected:

Average: ~92.33

Grade: A

✔ Test Case 2: Multiple Students

Enter 2–3 students and verify the report prints all correctly.

✔ Test Case 3: Boundary Values

Test edge marks like:

89 → Grade B

90 → Grade A

59 → Grade F

✔ Test Case 4: Invalid Inputs

Try entering non-numeric values to check error handling (currently no validation—can be added as future enhancement).
