#ifndef STUDENT_H
#define STUDENT_H

#include "Person.hpp"
#include <iostream>
#include <string>
class Student : public Person
{
// private members
   int m_student_id;
   std::string m_degree;
   double m_gpa;
   double m_scholarship_earning;


public:
	// public interface
    Student(std::string name, int age, double height, long id, int student_id, std::string degree, double gpa):
    Person{name, age, height, id}, m_student_id{student_id}, m_degree{degree}, m_gpa{gpa}
    {
        std::cout<<"Derived c'tor is called\n";
    }


    void print() const;
    virtual void printClass() const override {std::cout<<"Bu bir STUDENT sinifidir\n";}



  
};

#endif