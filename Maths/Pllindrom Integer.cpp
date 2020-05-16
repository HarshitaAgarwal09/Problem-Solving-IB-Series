int Solution::isPalindrome(int A) 
{
    if(A<0) return 0;
    
    int len = 0;
    int num = A;
    while(num>0)
    {
        len++;
        num/=10;
    }
    
    len--;
    while(A>0)
    {
        int p = pow(10,len);
        
        int num1 = A / p;
        int num2 = A % 10;
        
        if(num1!=num2) return 0;
        
        A%= p;
        A/=10;
        len-=2;
    }
    return 1;
}
