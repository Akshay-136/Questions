class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans(n, -1);  // Initialize the result vector with -1
        
        for(int i = 0 ; i < n ; i++){
            bool found = false;
            
            // Find the index of nums1[i] in nums2
            int j = 0;
            while(j < m && nums2[j] != nums1[i]){
                j++;
            }
            
            // Find the next greater element in nums2 after nums1[i]
            while(j < m){
                if(nums2[j] > nums1[i]){
                    ans[i] = nums2[j];
                    found = true;
                    break;
                }
                j++;
            }
        }
        
        return ans;
    }
};
