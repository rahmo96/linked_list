//
// Created by raha1 on 14/08/2023.
//
#include <iostream>
#include "Course.h"
using namespace std;
#ifndef PROJECT_2_STUDENT_H
#define PROJECT_2_STUDENT_H


class Student {
private:
    class Node{
    private:
        Course *course;
        Node *next;
    public:
        //Constructors
        Node() : course(nullptr),next(nullptr){}


        //operators
        Node & operator =(Node & n){
            this->course=n.course;
            this->next=n.next;

        };
        //Getters
        Course get_Course(){ return *course;};
        Node get_node(){ return *next;};
        Node  pointer(){return *this->next;}

        //
        bool is_next(){
            if (this->next== nullptr)
                return 0;
            else
                return 1;
        }

        Node(Course *pCourse, Node *pNode) : course(pCourse), next(pNode){};
    };
    Node *head;
    char * name;
public:
    //constructors
    Student() {name= nullptr; head=NULL;};
    Student(char *name, char *course);
    Student(Student &student);
    //distructor
    ~Student();
    //operators
    void operator +(Course *c);
    Student &operator =(Student &student);
    Student &operator +=(Course &course);
    ostream &operator <<(Course course);
    bool &operator<(Student &student);
    //setters
    void set_name(char *name);
    //Getters
    Node get_head(){return *head;}
    char get_name(){return *name;}

    bool is_course(char name);
    float average();



};


#endif //PROJECT_2_STUDENT_H
