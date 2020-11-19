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

    // int my_par{-6};
    // std::cout<<"|par| = "<<abs(my_par)<<'\n';

    // double my_par2{3.56};
    // std::cout<<"|par| = "<<abs(my_par2)<<'\n';

    // char my_par3{'h'};
    // std::cout<<"|par| = "<<abs(my_par3)<<'\n';

    // int my_int_par1{3};
    // int my_int_par2{6};
    // std::cout<<"Bigger = "<<bigger(my_int_par1, my_int_par2)<<'\n';

    // double my_d_par1{3.2};
    // double my_d_par2{6.8};
    // std::cout<<"Bigger = "<<bigger(my_d_par1, my_d_par2)<<'\n';

    // Cents penny{1};
    // Cents dime{10};
    // std::cout<<"Bigger = "<<bigger(penny, dime)<<'\n';

    // Array<int> my_int_array{5};
    // std::cout<<"The length = "<<my_int_array.getLength()<<'\n';
 
  // DERS 7 : STL 

  // 1. std::array

//   std::array<int, 5> arr1 ; // declare an array XXXXX
//   arr1 = {0,1,2,3,4};

//   std::array<int, 5> arr2 = {5,6,7,8,9}; // initialize via member initializer list 

//   std::array<Cents, 3> arr3 {Cents(1), Cents(5), Cents(10)};


//   for(int i{0};i < int(arr1.size()); ++i)
//   {
//     std::cout<<"Index = "<<i<<" Element = "<<arr1.at(i)<<'\n';
//   }

//   for(int i{0};i < int(arr3.size()); ++i)
//   {
//     std::cout<<"Index = "<<i<<" Element = "<<arr3.at(i)<<'\n';
//   }

//   std::cout<<"First element is "<<arr1.front()<<'\n'; 
//   std::cout<<"Last element is "<<arr1.back()<<'\n';

//   if(!arr2.empty())
//     std::cout<<"The array is not empty\n";

//   std::array<int,0> arr4;
//   if(!arr4.empty())
//     std::cout<<"The array is not empty\n"; 
//   else
//     std::cout<<"The array is empty\n"; 


//   // iterator örneği

//   for(auto it{arr1.begin()}; it != arr1.end(); ++it)
//   {
//     std::cout<<"The element is "<<*it<<'\n';
//     std::cout<<"The address of element is "<<&(*it)<<'\n';
//   }  
    
// for(auto it{arr1.rbegin()}; it != arr1.rend(); ++it)
//   {
//     std::cout<<"The element is "<<*it<<'\n';
//     std::cout<<"The address of element is "<<&(*it)<<'\n';
//   }  

// 2. std::vector

std::vector<int> vect1{9,8,7,6,5,4,3,2,1,0};
// std::cout<<"The MAX size of vect1 = "<<vect1.max_size()<<'\n';

//std::cout<<"The size of vect1 = "<<vect1.size()<<'\n';
//std::cout<<"The capacity of vect1 = "<<vect1.capacity()<<'\n';

// int value{0};
// for(int i{0};i< 20 ; ++i)
// {
//     std::cout<<"The size of vect1 = "<<vect1.size()<<'\n';
//     std::cout<<"The capacity of vect1 = "<<vect1.capacity()<<'\n'; 
//     vect1.push_back(--value); 

// }

// for(int i{0};i< 20 ; ++i)
// {
//     std::cout<<"The size of vect1 = "<<vect1.size()<<'\n';
//     std::cout<<"The capacity of vect1 = "<<vect1.capacity()<<'\n'; 
//     vect1.pop_back(); 

//     if (vect1.capacity() - vect1.size() > 10)
//       vect1.shrink_to_fit();
// }

// for(auto it{vect1.begin()}; it != vect1.end(); ++it)
//   std::cout<<"The element = "<<*it<<'\n';

vect1.shrink_to_fit();  
std::cout<<"The size of vect1 = "<<vect1.size()<<'\n';
std::cout<<"The capacity of vect1 = "<<vect1.capacity()<<'\n';

vect1.resize(5);
for(auto it{vect1.begin()}; it != vect1.end(); ++it)
  std::cout<<"The element = "<<*it<<'\n';

std::cout<<"The size of vect1 = "<<vect1.size()<<'\n';
std::cout<<"The capacity of vect1 = "<<vect1.capacity()<<'\n'; 

vect1.reserve(100);
std::cout<<"AFTER RESERVE : The capacity of vect1 = "<<vect1.capacity()<<'\n'; 

for(int i{0};i< 10 ; ++i)
{
    std::cout<<"The size of vect1 = "<<vect1.size()<<'\n';
    if(vect1.empty())
      break;
    vect1.pop_back(); 

}
  return 0; 
}  