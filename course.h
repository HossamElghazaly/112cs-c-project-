#ifndef COURSE_H
#define COURSE_H

class CCourse {
private:
    char course_name[20];
    char course_code[5];
    float course_cost;

public:

    void setCourseName(const char* name);
    const char* getCourseName();

    void setCourseCode(const char* code);
    const char* getCourseCode();

    void setCourseCost(float cost);
    float getCourseCost();

    void addCourse();
    void getCourseInfo();
};

#endif
