class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        
        priority_queue<int,vector<int>, greater<int>> minheap;
        
        for(int i=0;i<arr.size();i++){
            minheap.push(arr[i]);
            
            if(minheap.size()>k){
                minheap.pop();
            }    
        }
          return minheap.top();
    }
};