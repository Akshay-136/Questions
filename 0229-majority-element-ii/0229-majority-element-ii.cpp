class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int m = n / 3;
        int count = 1;
        int var = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == var) {
                count++;
            } else {
                if (count > m) {
                    result.push_back(var);
                }

                var = nums[i];
                count = 1;
            }
        }

        if (count > m) {
            result.push_back(var);
        }

        return result;
    }
};
