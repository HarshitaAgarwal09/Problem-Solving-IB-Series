int Solution::isPower(int A) 
{
    if(A==1) return true;
    
    for(int n = 2; n*n<=A ; n++)
    {
        int logr = log(A)/log(n);
        if(pow(n,logr) == A )return true;
    }
    return false;
}
