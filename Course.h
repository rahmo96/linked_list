//
// Created by raha1 on 14/08/2023.
//
#include <cstring>

#ifndef PROJECT_2_COURSE_H
#define PROJECT_2_COURSE_H


class Course {
private:
    char *name;
    int grade;
public:
    //constructors
    Course() :name(nullptr),grade(0){};
    Course(char *name,int grade);
    Course(const Course & course);
    //Getters
    char * get_name();
    int get_grade();
    //Setters
    void set_name(char*name);
    void set_grade(int grade);
    Course &operator = (const Course &c);



};


#endif //PROJECT_2_COURSE_H
