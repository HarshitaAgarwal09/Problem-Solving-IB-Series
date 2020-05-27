int Solution::repeatedNumber(const vector<int> &A) 
{
  vector<int> B = A;
    
    for(int i=0;i<A.size(); i++)
    {   
        int ele = abs(B[i]);
        if(B[ele]<0) return ele; 
        
        B[ele] = -1*abs(B[ele]);
    }
    return -1;
}
