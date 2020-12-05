#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <utility>
#include <map>

#include "Cents.hpp"
int main() 
{
  //LECTURE 7
  // std::queue

  // std::queue<double> que1;

  // que1.push(1.0); //First in- First out
  // que1.push(2.0);

  // double top_queue{que1.front()};
  // std::cout<<que1.front()<<' '<<top_queue<<'\n';

  // que1.pop();
  // std::cout<<que1.front()<<'\n';

  // //std::stack
  // std::stack<int> stk1;
  // if(stk1.empty())
  //   std::cout<<"The stack is empty\n";

  // stk1.push(1);
  // stk1.push(2);
  // stk1.push(3);

  // auto stk1_size{stk1.size()};

  // for(int i{0}; i<static_cast<int>(stk1_size);++i)
  // {
  //   std::cout<<"The top element = "<<stk1.top()<<'\n';
  //   std::cout<<"The size = "<<stk1.size()<<'\n';
  //   stk1.pop();

  // }

  //std::priority_queue

  // std::priority_queue<int> pri_que1;

  // pri_que1.push(1);        // 9--0--3
  // pri_que1.push(6);
  // pri_que1.push(2);

  // auto pri_que1_size{pri_que1.size()};

  // for(int i{0}; i<static_cast<int>(pri_que1_size);++i)
  // {
  //   std::cout<<"The top element = "<<pri_que1.top()<<'\n';
  //   std::cout<<"The size = "<<pri_que1.size()<<'\n';
  //   pri_que1.pop();

  // }
      
  // std::pair

  // std::pair<std::string, Cents> pair1 {"Dime", Cents{10}};
  // std::pair<std::string, Cents> pair2 = std::make_pair("Quarter", Cents(25));
  // std::pair<std::string, Cents> pair3 = std::make_pair("Penny", Cents(1));


  // std::cout<<"The key = "<<pair1.first<<" The value = "<<pair1.second<<'\n';
  
  // std::pair<int, double> pair4 {3, 4.7};
  // std::pair<int, double> pair5 {2, 7.7};

  // std::cout<<( pair4 > pair5);

  //std::map

   std::map<std::string, double> map1{{"Eren", 7.9}, {"Sefa", 9.2}};
   map1.insert(std::make_pair("Ziya", 4.7));

   std::cout<<"Eren has "<<map1["Eren"]<<" points\n";
   map1["Asude"] = 9.9;
   std::cout<<"Asude has "<<map1["Asude"]<<" points\n";
   map1["Ziya"] = 2.1;
   map1.insert(std::make_pair("Ziya", 4.7));
   std::cout<<"Ziya has "<<map1["Ziya"]<<" points\n";

   if(map1.find("Ziya") == map1.end())
      std::cout<<"There is no item\n";
   else   
      std::cout<<"The value is "<<map1.find("Ziya")->second<<'\n';

      




















  //std::map
  // // Initializing a map with integer keys
  // // and corresponding string values
  // std::map<int, string> Employees; 

  // //Inserting values in map using insert function
  // Employees.insert ( std::pair<int, string>(101,"Jon") );
  // Employees.insert ( std::pair<int, string>(103,"Daenerys") );
  // Employees.insert ( std::pair<int, string>(104,"Arya") );

  // // Inserting values using Array index notation
  // Employees[105] = "Sansa";  
  // Employees[102] = "Tyrion"; 
  
  // cout << "Size of the map is " << Employees.size() << endl << endl;  

  // // Printing values in the map
  // cout << endl << "Default Order of value in map:" << endl;  
  // for( map<int,string>::iterator iter=Employees.begin(); iter!=Employees.end(); ++iter)  
  // {  
  //   cout << (*iter).first << ": " << (*iter).second << endl;  
  // }  
  
  // // Finding the value corresponding to the key '102'
  // std::map<int, string>::iterator it = Employees.find(102);
  // if (it != Employees.end()){
  //   std::cout <<endl<< "Value of key = 102 => " << Employees.find(102)->second << '\n';
  // }

  return 0; 
}  