// ABS functions
int abs(int par)
{

    if(par < 0)
        return -par;
    else
        return par;   
}

double abs(double par)
{

    if(par < 0)
        return -par;
    else
        return par;   
}

long abs(long par)
{

    if(par < 0)
        return -par;
    else
        return par;   
}

char abs(char par)
{

    if(par < 0)
        return -par;
    else
        return par;   
}

// BIGGER

int bigger(int par1, int par2)
{
    return par1>par2?par1:par2;
}

double bigger(double par1, double par2)
{
    return par1>par2?par1:par2;
}