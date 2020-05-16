int Solution::trailingZeroes(int A) 
{
    int count = 0;
    int p = 5;
    
    while((A/p)>0)
    {
        count+= A/p;
        p*=5;
    }
    return count;
}
