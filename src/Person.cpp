
#include "Person.hpp"

int Person::s_number{0};

void Person::print() const 
{
    std::cout<<"PERSON --> TC = "<<m_id<<" Name = "<<m_name<<" Age = "<<m_age<<'\n';

}