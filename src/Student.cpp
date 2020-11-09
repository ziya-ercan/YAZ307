#include "Student.hpp"

void Student::print() const 
{
    // Person::print();
    this->Person::print();
    std::cout<<"STUDENT --> ID = "<<m_student_id
             <<" Degree = "<<m_degree
             <<" GPA = "<<m_gpa
             <<'\n';

}