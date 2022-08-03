class Solution {
public:
    
    int first(vector<int> arr,int target){
        int n =arr.size();
        int low =0;
        int high =n-1;
        int res=-1;
        while(low<=high){
            int mid = low + (high- low)/2;
            if(arr[mid]==target)
            {
                res = mid;
                high = mid - 1;
                
            }
            else if(target < arr[mid])
                high = mid-1;
            else 
                low = mid + 1;
            
        }
        return res;
    }
    
        int sec(vector<int> arr,int target){
        int n =arr.size();
        int low =0;
        int high =n-1;
        int res=-1;
        while(low<=high){
            int mid = low + (high- low)/2;
            if(arr[mid]==target)
            {
                res = mid;
                low = mid + 1;
                
            }
            else if(target < arr[mid])
                high = mid-1;
            else 
                low = mid + 1;
            
        }
        return res;
    }
    
    vector<int> searchRange(vector<int>& arr, int target) {
        int f = first(arr,target);
        int s= sec(arr,target);
        
        return{f,s};
        
        
    }
};