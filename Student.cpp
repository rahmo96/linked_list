//
// Created by raha1 on 14/08/2023.
//
#include "Course.h"
#include "Student.h"

Student::Student(Student &student) {
    this->name=student.name;
    this->head=student.head;
}
//distructors
Student:: ~Student(){
    cout<<".\n";
}

void Student::set_name(char *name) {
    this->name= new char [strlen(name)+1];
    strcpy(this->name,name);
    this->head= nullptr;
}


void Student::operator+(Course *c) {
    head=new Node(c,head);
}