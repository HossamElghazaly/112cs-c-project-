#ifndef STUDENT_H
#define STUDENT_H

class CStudent {
private:
    char student_name[50];
    int student_ID;
    char student_email_username[100];
    char student_major[10];
    float student_grades[5];
    float student_score;
    char student_email_password[10];

public:
    CStudent();

    void setStudentName(const char* name);
    const char* getStudentName();

    void setStudentID(int id);
    int getStudentID();

    const char* getStudentEmailUsername();
    void setStudentMajor(const char* major);
    void setStudentGrades(const float* grades);
    void setStudentEmailPassword(const char* password);

    void registerStudent();
    void getStudentInfo();
    void calculateGPA();
};

class CPG_Student : public CStudent {
private:
    char pg_student_job_title[20];

public:
    void setPGStudentJobTitle(const char* jobTitle);
    const char* getPGStudentJobTitle();
};
void saveStudentDataToFile(const CStudent& student);
#endif
