#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
// private members
    std::string m_name{"No Name"};
    int m_age{-1};
    double m_height{0};
    long m_id{123456};

public:
	// public interface
    Person(std::string name, int age, double height, long id):
    m_name{name}, m_age{age}, m_height{height}, m_id{id}
    {
       std::cout<<"Base class c'tor is called\n";
       s_number++; 
    }

    static int s_number;

   // Person() = default;
    Person() // user defined default ctor
    {
        s_number++;
    }
    int getAge() const {return m_age;} // default inline function
    std::string getName() const {return m_name;}
    long getId() const {return m_id;}
    void print() const;
    virtual void printClass() const {std::cout<<"Bu bir PERSON sinifidir\n";}

    void setAge(int age){m_age = age;}
    void setName(std::string name){m_name = name;}
    void setId(long id) {m_id = id;}





  
};

#endif