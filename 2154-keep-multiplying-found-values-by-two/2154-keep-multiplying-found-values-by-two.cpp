class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0 ;i<n ; i++){
            if(original==nums[i]){
                original = 2 * original;
            }
        }
        return original;
        
    }
};