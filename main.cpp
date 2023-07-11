#include "student.h"
#include "course.h"
#include <iostream>

int main() {
    int n_students, n_courses;

    std::cout << "Enter the number of students: ";
    std::cin >> n_students;

    std::cout << "Enter the number of courses: ";
    std::cin >> n_courses;

    CStudent students[n_students];
    CCourse courses[n_courses];

    for (int i = 0; i < n_students; ++i) {
        std::cout << "\nRegistering student #" << i + 1 << std::endl;
        students[i].registerStudent();
    }

    std::cout << "\nStudent Information:\n";
    for (int i = 0; i < n_students; ++i) {
        std::cout << "\nStudent #" << i + 1 << std::endl;
        students[i].getStudentInfo();
    }

    for (int i = 0; i < n_courses; ++i) {
        std::cout << "\nAdding course #" << i + 1 << std::endl;


        char course_name[50];
        char course_code[10];
        float course_cost;

        std::cout << "Enter course name: ";
        std::cin.ignore();
        std::cin.getline(course_name, 50);

        std::cout << "Enter course code: ";
        std::cin.getline(course_code, 10);

        std::cout << "Enter course cost: ";
        std::cin >> course_cost;

        // Set course details
        courses[i].setCourseName(course_name);
        courses[i].setCourseCode(course_code);
        courses[i].setCourseCost(course_cost);
    }

    // Print course information
    std::cout << "\nCourse Information:\n";
    for (int i = 0; i < n_courses; ++i) {
        std::cout << "\nCourse #" << i + 1 << std::endl;
        courses[i].getCourseInfo();
    }

    CPG_Student pg_students[n_students];

    for (int i = 0; i < n_students; ++i) {
        std::cout << "\nRegistering PG student #" << i + 1 << std::endl;
        pg_students[i].registerStudent();
        char pg_student_job_title[20];

        std::cout << "Enter PG student job title: ";
        std::cin.ignore();
        std::cin.getline(pg_student_job_title, 20);
        std::cout << "\nStudent data saved to file successfully!" << std::endl;

        pg_students[i].setPGStudentJobTitle(pg_student_job_title);
    }

    std::cout << "\nPG Student Information:\n";
    for (int i = 0; i < n_students; ++i) {
        std::cout << "\nPG Student #" << i + 1 << std::endl;
        pg_students[i].getStudentInfo();
        std::cout << "PG Student Job Title: " << pg_students[i].getPGStudentJobTitle() << std::endl;
    }

    return 0;
}
