#ifndef CENTS_H
#define CENTS_H

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents)
        : m_cents{ cents }
    {
    }
    friend bool operator>(const Cents &c1, const Cents &c2)
    {
        return (c1.m_cents > c2.m_cents);
    }

    friend std::ostream& operator<< (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents << " cents ";
        return out;
    } 

    // Cents& operator+=(const Cents &cents)
    // {
    //     m_cents += cents.m_cents;
    //     return *this;
    // }
 
    // Cents& operator/=(int value)
    // {
    //     m_cents /= value;
    //     return *this;
    // }  
};

#endif