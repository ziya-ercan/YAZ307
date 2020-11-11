#include <iostream>
#include "Student.hpp"
#include "MyTemplateFuncs.hpp"
#include "Cents.hpp"
#include "Array.hpp"

int main() 
{
    // LECTURE-5
    // Student student1{"Ziya Ercan", 34, 1.70, 1129877, 1, "university", 3.00};
    // // Student* p_student{&student1};

    // Person person1{"Mustafa Keser", 65, 1.68, 123456789};
    // Person* p_person{&person1};

    // // p_student->printClass();
    // // student1.printClass();

    // // person1.printClass();
    // p_person->printClass();

    // Person* p_person2{&student1};
    // p_person2->printClass();
    
    // // student1.print();

    
    // // p_student->Person::print();
    // // p_student->print();
    // // std::cout<<"Bu kisinin yasi = "<<person1.getAge()<<'\n';
    // // std::cout<<"ID = "<<person1.getId()<<'\n';

    // // Person person2;
    // // std::cout<<"Bu kisinin yasi = "<<person2.getAge()<<'\n';
    // // std::cout<<"ID = "<<person2.getId()<<'\n';

    // // const Person person3{"Mustafa Keser", 65, 1.68, 123456789};
    // // std::cout<<"ID = "<<person3.getId()<<'\n';

    // // std::cout<<"Total Person = "<<Person::s_number<<'\n';


    // LECTURE-6

    int my_par{-6};
    std::cout<<"|par| = "<<abs(my_par)<<'\n';

    double my_par2{3.56};
    std::cout<<"|par| = "<<abs(my_par2)<<'\n';

    char my_par3{'h'};
    std::cout<<"|par| = "<<abs(my_par3)<<'\n';

    int my_int_par1{3};
    int my_int_par2{6};
    std::cout<<"Bigger = "<<bigger(my_int_par1, my_int_par2)<<'\n';

    double my_d_par1{3.2};
    double my_d_par2{6.8};
    std::cout<<"Bigger = "<<bigger(my_d_par1, my_d_par2)<<'\n';

    Cents penny{1};
    Cents dime{10};
    std::cout<<"Bigger = "<<bigger(penny, dime)<<'\n';

    Array<int> my_int_array{5};
    std::cout<<"The length = "<<my_int_array.getLength()<<'\n';


    return 0; 
}  