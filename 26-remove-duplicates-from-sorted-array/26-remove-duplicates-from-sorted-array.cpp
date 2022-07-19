class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
      int i=0;
        int j=1;
        while(i<n && j<n )
        {
            if(arr[i]==arr[j])
            {
                j++;
            }
            else
            {
                i++;
                arr[i]=arr[j];
            }
        }
        return i+1;
        
        
    }
};