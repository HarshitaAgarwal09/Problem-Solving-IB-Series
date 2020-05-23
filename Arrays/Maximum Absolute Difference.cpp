int Solution::maxArr(vector<int> &A) 
{
    // int n = A.size();
    // int omax = 0;
    // for(int i = 0 ; i<n; i++)
    // {
    //     for(int j = i+1; j<n ; j++)
    //     {
    //         omax = max(omax,abs(A[i]-A[j])+abs(i-j));  
    //     }
    // }
    // return omax;
    
    int max1 = INT_MIN ,max2 = INT_MIN , min1= INT_MAX, min2 = INT_MAX;
    
    for(int i = 0 ;i<A.size(); i++)
    {
        max1 = max(A[i]+i , max1);
        min1 = min(A[i]+i , min1);
        
        max2 = max(A[i]-i , max2);
        min2 = min(A[i]-i , min2);  
    }
    
    return max(max1-min1, max2-min2);
}