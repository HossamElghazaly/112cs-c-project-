#include "course.h"
#include <iostream>
#include <cstring>

void CCourse::setCourseName(const char* name) {
    strncpy(course_name, name, sizeof(course_name));
}

const char* CCourse::getCourseName() {
    return course_name;
}

void CCourse::setCourseCode(const char* code) {
    strncpy(course_code, code, sizeof(course_code));
}

const char* CCourse::getCourseCode() {
    return course_code;
}

void CCourse::setCourseCost(float cost) {
    course_cost = cost;
}

float CCourse::getCourseCost() {
    return course_cost;
}

void CCourse::addCourse() {
}

void CCourse::getCourseInfo() {
    std::cout << "Course Name: " << course_name << std::endl;
    std::cout << "Course Code: " << course_code << std::endl;
    std::cout << "Course Cost: " << course_cost << std::endl;
}
