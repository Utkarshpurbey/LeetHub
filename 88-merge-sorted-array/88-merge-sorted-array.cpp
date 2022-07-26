class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int *arr = new int[m+n];
        int i=0,j=0;
        while(i<m and j<n){
            if(nums1[i]<nums2[j]){
                arr[i+j]=nums1[i];
                i++;
            }
            else{
                arr[i+j]=nums2[j];
                j++;
            }
        }
        while(i<m){
            arr[i+j]=nums1[i];i++;
        }
        while(j<n){
            arr[i+j]=nums2[j];j++;
        }
        for(int i =0;i<nums1.size();i++){
            nums1[i] = arr[i];
        }
        delete []arr;
    }
};