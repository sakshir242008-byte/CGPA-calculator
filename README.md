🎓 CGPA CALCULATOR IN C++
--------------------------------------

📌ABOUT THE PROJECT :-

The CGPA Calculator is a console-based application developed using C++. It helps students calculate their Semester Grade Point Average (SGPA) and Overall Cumulative Grade Point Average (CGPA).

The program takes course details, grades, and credit hours as input, generates an individual course report, calculates total grade points, and displays the final SGPA and CGPA.

This project was developed as part of my C++ programming internship task at CodeAlpha.


 FEATURES
 ------------------

 - Enter the number of courses.
 - Input course names, grades, and credit hours.
 - Convert letter grades into numerical grade points.
 - Calculate total credit hours.
 - Calculate total weighted grade points.
 - Generate an individual course report.
 - Calculate Semester Grade Point Average (SGPA).
 - Calculate Overall Cumulative Grade Point Average (CGPA).
 - Display results up to two decimal places.
 - Simple and user-friendly console interface.

 TECHNOLOGIES USED
 ----------------------------

  - Programming Language: C++
  - Concepts Used:
  - Arrays
  - Loops
  - Conditional Statements
  - Variables and Data Types
  - Input/Output Operations
  - Mathematical Operations
  - Type Casting
  - C++ Manipulators ("setw", "setprecision", "fixed")

 Grade Point System
 -----------------------

 The project uses the following grade-to-grade-point conversion system:

  Grade| Grade Points
  A+| 9.5
  A| 8.5
  B+| 8.0
  B| 7.0
  C+| 6.5
  C| 6.0
  D| 4.0
  F| 0.0

CALCULATION FORMULA 
------------------------

1. Total Grade Points

Total Grade Points = Σ (Grade Points × Credit Hours)

2. Total Credits

Total Credits = Sum of all course credit hours.

3. Semester Grade Point Average (SGPA)

SGPA = Total Grade Points / Total Credit Hours

4. Overall Cumulative Grade Point Average (CGPA)

CGPA = Sum of Semester GPAs / Number of Completed Semesters

Note: The overall CGPA calculation uses the average of semester GPAs.


------------------------
SAMPLE OUTPUT
------------------------
========================================
          CGPA CALCULATOR
========================================

Enter number of courses: 4

--- Course 1 ---
Enter course name: Mathematics
Enter grade: A
Enter credit hours: 4

--- Course 2 ---
Enter course name: Physics
Enter grade: A+
Enter credit hours: 3

--- Course 3 ---
Enter course name: Computer Science
Enter grade: A+
Enter credit hours: 4

--- Course 4 ---
Enter course name: English
Enter grade: B
Enter credit hours: 2

             COURSE REPORT

Course              Grade     Credits    Points
------------------------------------------------
Mathematics         8.5       4          34
Physics             9.5       3          28.5
Computer Science    9.5       4          38
English             7         2          14
------------------------------------------------
TOTAL                         13         114.5

Semester GPA: 8.81

Enter number of semesters completed: 2

Enter SGPA of semester 1: 8.5

Overall CGPA: 8.66

========================================
       Thanks for using CGPA Calculator
========================================

Sample values are for demonstration purposes.

HOW TO RUN THE PROJECT :-
------------------------------

Follow these steps to run the project:

1. Clone this repository or download the project files.
2. Open the project folder in Visual Studio Code.
3. Open the terminal.
4. Compile the C++ program using:

g++ project.cpp -o cgpa

5. Run the executable:

Windows:

.\cgpa.exe

Linux / macOS:

./cgpa

PROJECT STRUCTURE :-
------------------------

CGPA Calculator/
│
├── images/
│   ├── output1.png
│   └── output2.png
│
├── project.cpp
│
└── README.md

 Learning Outcomes :-
 --------------------------

Through this project, I learned how to:

- Apply fundamental C++ programming concepts.
- Work with arrays to store multiple course details.
- Use conditional statements for grade conversion.
- Implement loops for repetitive calculations.
- Perform weighted average calculations.
- Format output using C++ manipulators.
- Develop a practical console-based application.

 Author :-
 ------------------

 Sakshi Rathore
 B.Tech – Artificial Intelligence
 Jabalpur Engineering College (Madhya Pradesh)
 India

 Acknowledgement :-
 ----------------------------

This project was developed as part of my C++ programming internship at CodeAlpha.

Thank you for visiting my repository!

If you find this project useful, feel free to give it a ⭐.