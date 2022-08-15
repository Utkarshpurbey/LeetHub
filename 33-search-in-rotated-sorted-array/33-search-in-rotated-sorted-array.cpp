class Solution {
public:
    int binarySearch(vector<int>array, int x, int low, int high) {
        while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
          return mid;

        if (array[mid] < x)
          low = mid + 1;

        else
          high = mid - 1;
  }

  return -1;
}
  int findPivot(vector<int>arr, int low, int high)
    {
        if (high < low)
            return -1;
        if (high == low)
            return low;
        int mid = (low + high) / 2;
        if (mid < high && arr[mid] > arr[mid + 1])
            return mid;

        if (mid > low && arr[mid] < arr[mid - 1])
            return (mid - 1);

        if (arr[low] >= arr[mid])
            return findPivot(arr, low, mid - 1);

        return findPivot(arr, mid + 1, high);
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findPivot(nums,0,n-1);
        pivot++;
        int res =-1;
        if(pivot!=0){
            int left = binarySearch(nums,target,0,pivot-1);
            int right = binarySearch(nums,target,pivot,n-1);
            if(left == -1 && right ==-1)
                res =-1;
            else if(left == -1)
                res = right;
            else res = left;
        }else{
            res = binarySearch(nums,target,pivot,n-1);
        }
        
        return res;    
    }
};