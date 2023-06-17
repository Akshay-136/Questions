class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> nums1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 1 ; i< n; i++){
            if(nums[i-1]==nums[i]){
                nums1.push_back(nums[i]);
            }
        }
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        return nums1;
        }
    
        

};