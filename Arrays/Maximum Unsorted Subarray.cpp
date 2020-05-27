vector<int> Solution::subUnsort(vector<int> &A) 
{
    vector<int> B = A;
    sort(B.begin(),B.end());
    
    int l = -1;
    int r = -1;
    
    for(int i = 0 ;i <A.size();i++)
    {
        if(A[i]!=B[i]){
            r = i;
            if(l == -1) l = i;
        }
    }
    
    if(l==-1||r==-1) return {-1};
    return {l,r};
}
