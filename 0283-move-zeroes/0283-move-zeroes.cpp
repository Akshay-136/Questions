class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for(int i = n - 1; i >= 0; i--) { // This way, erasing an element won't affect the positions of the elements that are yet to be processed.
            if(nums[i] == 0) {
                count++;
                nums.erase(nums.begin() + i);
            }
        }
        
        for(int i = 0; i < count; i++) {
            nums.push_back(0);
        }
    }
};
