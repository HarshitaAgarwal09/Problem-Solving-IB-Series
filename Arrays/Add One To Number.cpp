vector<int> Solution::plusOne(vector<int> &A) 
{
		int carry  = 1;
		int num = 0;
		for(int i = A.size()-1; i>=0; i--)
		{
				A[i] = A[i]+carry;
				
				carry = A[i]/10;
				
				A[i] = A[i]%10;
		}
		
		
		while(carry!=0)
		{
				A.insert(A.begin(),carry%10);
				carry/=10;
		}
		
		while(A[0]==0)
				A.erase(A.begin());
		return A;
}
