class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0;
        int ans, ans1 = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > max) {
                max = nums[i];
                ans1 = i;
            }
        }
        for (int j = 0; j < n; j++) {
            if (j != ans1 && max < 2 * nums[j]) {
                ans = -1;
                return ans;
            }
        }
        return ans1;
    }
};
