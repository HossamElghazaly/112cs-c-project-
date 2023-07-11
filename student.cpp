#include "student.h"
#include <iostream>
#include <cstring>
#include <string>

CStudent::CStudent() {
    std::memset(student_name, 0, sizeof(student_name));
    student_ID = 0;
    std::memset(student_email_username, 0, sizeof(student_email_username));
    std::memset(student_major, 0, sizeof(student_major));
    std::memset(student_grades, 0, sizeof(student_grades));
    student_score = 0.0;
    std::memset(student_email_password, 0, sizeof(student_email_password));
}

void CStudent::setStudentName(const char* name) {
    std::strcpy(student_name, name);
}

const char* CStudent::getStudentName() {
    return student_name;
}

void CStudent::setStudentID(int id) {
    student_ID = id;
}

int CStudent::getStudentID() {
    return student_ID;
}


const char* CStudent::getStudentEmailUsername() {
    return student_email_username;
}

void CStudent::setStudentMajor(const char* major) {
    std::strcpy(student_major, major);
}

void CStudent::setStudentGrades(const float* grades) {
    for (int i = 0; i < 5;++i) {
        student_grades[i] = grades[i];
    }
}

void CStudent::setStudentEmailPassword(const char* password) {
    std::strcpy(student_email_password, password);
}

void CStudent::registerStudent() {

    std::cout << "Enter student name: ";
    std::cin.ignore(); // Ignore the newline character from previous input
    std::cin.getline(student_name, sizeof(student_name));

    std::cout << "Enter student ID: ";
    std::cin >> student_ID;

    std::cout << "Enter student email: ";
    std::cin.ignore();
    std::cin.getline(student_email_username, sizeof(student_email_username));

    std::cout << "Enter student email password: ";
    std::cin >> student_email_password;

    std::cout << "Enter student major: ";
    std::cin.ignore();
    std::cin.getline(student_major, sizeof(student_major));

    std::cout << "Enter student [5]grades: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> student_grades[i];
    }

    calculateGPA();

}

void CStudent::getStudentInfo() {
    std::cout << "Student Name: " << student_name << std::endl;
    std::cout << "Student ID: " << student_ID << std::endl;
    std::cout << "Student Email: " << student_email_username<< std::endl;
    std::cout << "Student Major: " << student_major << std::endl;
    std::cout << "Student [5]Grades: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << student_grades[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Student GPA: " << student_score << std::endl;
}

void CStudent::calculateGPA() {
    float sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        sum += student_grades[i];
    }
    student_score = sum / 100.0;
}

void CPG_Student::setPGStudentJobTitle(const char* jobTitle) {
    std::strcpy(pg_student_job_title, jobTitle);
}

const char* CPG_Student::getPGStudentJobTitle() {
    return pg_student_job_title;
}
// Mohammed Ahmed Elmorsy  221001919
// Fady Muhammed Farouk    221001641
// Hossam Elghazaly        221001672
