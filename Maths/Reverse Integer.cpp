int Solution::reverse(int A) 
{
    int reverse = 0;
    int num = A;
    while(abs(A)>0)
    {
        int temp = reverse*10 + A%10;     
    
        if(temp/10 != reverse) return 0;
        reverse = temp;
        
        A/=10;
    }
    return reverse;
}
