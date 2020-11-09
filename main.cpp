#include <iostream>
#include "Student.hpp"

int main() 
{
    Student student1{"Ziya Ercan", 34, 1.70, 1129877, 1, "university", 3.00};
    // Student* p_student{&student1};

    Person person1{"Mustafa Keser", 65, 1.68, 123456789};
    Person* p_person{&person1};

    // p_student->printClass();
    // student1.printClass();

    // person1.printClass();
    p_person->printClass();

    Person* p_person2{&student1};
    p_person2->printClass();
    
    // student1.print();

    
    // p_student->Person::print();
    // p_student->print();
    // std::cout<<"Bu kisinin yasi = "<<person1.getAge()<<'\n';
    // std::cout<<"ID = "<<person1.getId()<<'\n';

    // Person person2;
    // std::cout<<"Bu kisinin yasi = "<<person2.getAge()<<'\n';
    // std::cout<<"ID = "<<person2.getId()<<'\n';

    // const Person person3{"Mustafa Keser", 65, 1.68, 123456789};
    // std::cout<<"ID = "<<person3.getId()<<'\n';

    // std::cout<<"Total Person = "<<Person::s_number<<'\n';

 
    return 0; 
}  