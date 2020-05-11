
int Helper(vector<int> &A, int B, int C,int num, int level) 
{
    if(level == B)
    {
        if(B == 1 && num == 0) return 1;
        if(num >= pow(10,B-1)) return 1;
        else return 0;
    }
    
    int count = 0;
    for(int i = 0 ; i<A.size(); i++)
    {   
        int n = num*10 + A[i];
        if(n < C) count+=Helper(A,B,C,n,level+1);
    }
    return count;
}

int Solution::solve(vector<int> &A, int B, int C) 
{
    if(C < pow(10,B-1)) return 0;
    return Helper(A,B,C,0,0);
}
