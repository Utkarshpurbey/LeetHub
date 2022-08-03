class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int global_min = arr[0];
        int profit=0;
        for(int i=0;i<n;i++)
        {
            global_min= min(global_min,arr[i]);
            profit = max(profit ,arr[i] -global_min);
        }
        return profit;
        
    }
};