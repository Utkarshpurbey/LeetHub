class Solution {
public:
    
     int maximumNonAdjacentSum(vector<int> &nums){
        int n= nums.size();
        int prev1 = nums[0];
        int prev2 = 0;
         for(int i=1;i<n;i++){
            int liyei = nums[i] ;
            if(i>1) liyei += prev2;
            int nahiliyei =  prev1;
            int curr = max(liyei ,nahiliyei);
            prev2= prev1;
            prev1 = curr;
    }
    return prev1;
}
    
    int rob(vector<int>& valueInHouse) {
        
            int n = valueInHouse.size();
            if(n==1)
                return valueInHouse[0];
        vector<int> firstchora;
        vector<int> lastchora;

        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                firstchora.push_back(valueInHouse[i]);
            }
            if(i!=n-1)
            {
                lastchora.push_back(valueInHouse[i]);
            }
      }

        return max(maximumNonAdjacentSum(firstchora),maximumNonAdjacentSum(lastchora));


        
    }
};