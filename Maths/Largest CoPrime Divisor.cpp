int Solution::cpFact(int A, int B) 
{
    int gcdvalue = __gcd(A,B);
    while(gcdvalue!=1)
    {
        A/=gcdvalue;
        gcdvalue = __gcd(A,B);
    }
    return A;
}