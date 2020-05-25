string Solution::largestNumber(const vector<int> &A) 
{
    vector<string> arr;
    
    string ans ="";
    for(int num:A){
        arr.push_back(to_string(num));
    }
    
    sort(arr.begin(),arr.end(),[](string a, string b){
       return b+a < a+b; 
    });
    
    for(string num: arr){
      if(num=="0" && ans=="0") continue;
       ans += num;
    }
    
    return ans;
}
