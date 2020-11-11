template<typename T>
const T abs(const T& par)
{
    if(par < 0)
        return -par;
    else
        return par;  
}

template<typename T>
const T bigger(const T &par1, const T &par2)
{
    return par1>par2?par1:par2;
}