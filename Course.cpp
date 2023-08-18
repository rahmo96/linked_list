//
// Created by raha1 on 14/08/2023.
//

#include "Course.h"


Course::Course(char *name,int grade){
    this->name= new char [strlen(name)+1];
    strcpy(this->name,name);
    this->name[strlen(name)+1]='\0';
    this->grade=grade;
}
Course::Course(const Course &course){
    this->name=course.name;
    this->grade=course.grade;

}
//Getters
char *Course::get_name() {return name;}
int Course::get_grade() {return grade;}

//Setters
void Course::set_name(char *name) {
    delete[]this->name;
    this->name=name;
}
void Course::set_grade(int grade) {
    this->grade=grade;
}

//
Course &Course::operator=(const Course &c) {
    this->name=c.name;
    this->grade=c.grade;
    return *this;
}
