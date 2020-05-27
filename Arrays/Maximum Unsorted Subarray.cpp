//https://medium.com/@jatingrover1358/maximum-unsorted-subarray-e186bbf2d40e
vector<int> Solution::subUnsort(vector<int> &A) 
{
    int l = -1;
    int r = -1;
    
    for(int i = 0 ;i <A.size()-1;i++)
    {
        if(A[i]>A[i+1]) l = i;
        if(l!=-1) break;
    }
    
    
    for(int i = A.size()-1 ;i >0; i--)
    {
        if(A[i]<A[i-1]) r = i;
        if(r!=-1) break;
    }
    
    
    if(l==-1||r==-1) return {-1};
    
    int min_ = A[l];
    int max_ = A[r];
    
    for(int i = l ; i<=r; i++)
    {
        min_ = min(min_,A[i]);
        max_ = max(max_,A[i]);
    }
    
    for(int i = 0 ;i<l ; i++){
        if(A[i]>min_){
            l=i;
            break;
        }
    }
    
    
    for(int i = A.size()-1 ;i>r ; i--){
        if(A[i]<max_){
            r=i;
            break;
        }
    }
    
    return {l,r};
}

// vector<int> Solution::subUnsort(vector<int> &A) 
// {
//     vector<int> B = A;
//     sort(B.begin(),B.end());
    
//     int l = -1;
//     int r = -1;
    
//     for(int i = 0 ;i <A.size();i++)
//     {
//         if(A[i]!=B[i]){
//             r = i;
//             if(l == -1) l = i;
//         }
//     }
    
//     if(l==-1||r==-1) return {-1};
//     return {l,r};
// }
