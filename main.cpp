#include <iostream>
#include <cassert>
#include <cmath>

// WEEK-10 : EXCEPTION HANDLING
// approach1
// double mySqrt(double number)
// {
//     if(number>0.0)
//         return std::sqrt(number);
//     else
//     {
//         return -99;
//     }
        
// }

// double mySqrt(double number)
// {
//     assert(number>0.0);

//     return std::sqrt(number);
// }

double mySqrt(double number)
{
    if (number<0.0)
    {
        std::cerr<<"Negative number is passed\n";
        throw -1;
    }
    return std::sqrt(number);
}

// const int run{0};
// static_assert(run==1,"The assert fails!");

// double divide(double x, double y, bool& success)
// {
//     if (y==0.0)
//     {
//         success = false;
//         return -1;
//     }       
//     else
//     {
//        success = true; 
//        return x/y;
//     }
        
// }

// int main()
// {
    // // char a{'a'};
    // // char b{'b'};
    // // std::cout<<"a/b"<<int(a)<<int(b)<<b/a;

    // // std::cout<<"Please enter two numbers for division\n";
    // // double x,y;
    // // std::cin>>x>>y;
    // // bool success{false};
    // // double result{divide(x,y,success)};
    // // if (success)
    // //     std::cout<<"The result of x/y = "<<result;

    // // // std::cout<<"Please enter a positive number\n";
    // // // double number{};
    // // // std::cin>>number;
    // // // double result{mySqrt(number)};
    // // // std::cout<<"The sqrt of number"<<number<<" is "<<result<<'\n';
    // double result{};

    // try
    // {
    //     std::cout<<"Please enter a non-negative number\n";
    //     double number{};
    //     std::cin>>number;
    //     std::cout<<"Before the throw\n";
    //     result=mySqrt(number);

    //    // throw 10.0;  // int type exception is throwed!

    //     std::cout<<"After the throw\n";
        
    // }
    // catch(int error)
    // {
    //     std::cout<<"Exception occured!The error code =" <<error<<'\n';
    // }
    // catch(double)
    // {
    //     std::cout<<"Double type Exception occured!\n";
    // }

    // std::cout<<"All exceptions are handled\n";
    


//     return 0;
// }





void last() // called by third()
{
    std::cout << "Start last\n";
    std::cout << "last throwing double exception\n";
    throw "Exception!";
    std::cout << "End last\n";
}
 
void third() // called by second()
{
    std::cout << "Start third\n";
    last();
    std::cout << "End third\n";
}
 
void second() // called by first()
{
    std::cout << "Start second\n";
    try
    {
        third();
    }
    catch(double)
    {
         std::cerr << "second caught double exception\n";
    }
    std::cout << "End second\n";
}
 
void first() // called by main()
{
    std::cout << "Start first\n";
    try
    {
        second();
    }
    catch (int)
    {
         std::cerr << "first caught int exception\n";
    }
    catch (double)
    {
         std::cerr << "first caught double exception\n";
    }
    std::cout << "End first\n";
}
 
int main()
{
    std::cout << "Start main\n";
    try
    {
        first();
    }
    catch (int)
    {
         std::cerr << "main caught int exception\n";
    }
    std::cout << "End main\n";
  
    return 0;
}

// #include <iostream>
// #include <cmath> // for sqrt() function
 
// // A modular square root function
// double mySqrt(double x)
// {
//     // If the user entered a negative number, this is an error condition
//     if (x < 0.0)
//         throw "Can not take sqrt of negative number"; // throw exception of type const char*
 
//     return sqrt(x);
// }
 
// int main()
// {
//     std::cout << "Enter a number: ";
//     double x;
//     std::cin >> x;
 
//     // Look ma, no exception handler!
//     std::cout << "The sqrt of " << x << " is " << mySqrt(x) << '\n';
 
//     return 0;
// }


// #include <iostream>
 
// class Member
// {
// public:
// 	Member()
// 	{
// 		std::cerr << "Member allocated some resources\n";
// 	}
 
// 	~Member()
// 	{
// 		std::cerr << "Member cleaned up\n";
// 	}
// };
 
// class A
// {
// private:
// 	int m_x;
// 	Member m_member;
 
// public:
// 	A(int x) : m_x{x}
// 	{
// 		if (x <= 0)
// 			throw 1;
// 	}
	
// 	~A()
// 	{
// 		std::cerr << "~A\n"; // should not be called
// 	}
// };
 
 
// int main()
// {
// 	try
// 	{
// 		A a{0};
// 	}
// 	catch (int)
// 	{
// 		std::cerr << "Oops\n";
// 	}
 
// 	return 0;
// } 

// #include <iostream>
// #include <string>
 
// class ArrayException
// {
// private:
// 	std::string m_error;
 
// public:
// 	ArrayException(std::string error)
// 		: m_error(error)
// 	{
// 	}
 
// 	 const char* getError() const { return m_error.c_str(); }
// };

// class IntArray
// {
// private:
 
// 	int m_data[3]; // assume array is length 3 for simplicity
// public:
// 	IntArray() {}
	
// 	int getLength() const { return 3; }
 
// 	int& operator[](const int index)
// 	{
// 		if (index < 0 || index >= getLength())
// 			throw ArrayException("Invalid index");
 
// 		return m_data[index];
// 	}
 
// };

 
// int main()
// {
// 	IntArray array;
 
// 	try
// 	{
// 		int value{ array[5] };
// 	}
// 	catch (const ArrayException &exception)
// 	{
// 		std::cerr << "An array exception occurred (" << exception.getError() << ")\n";
// 	}
// }

// class Base
// {
// public:
//     Base() {}
// };
 
// class Derived: public Base
// {
// public:
//     Derived() {}
// };
 
// int main()
// {
//     try
//     {
//         throw Derived();
//     }
//     catch (const Derived &derived)
//     {
//         std::cerr << "caught Derived";
//     }
//     catch (const Base &base)
//     {
//         std::cerr << "caught Base";
//     }

//     return 0;
// }	


