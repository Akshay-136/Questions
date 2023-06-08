class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        set<int>s;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0;i<n;i++){
            for(int j = 0 ; j<m;j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums1[i]);
                }
            }
        }
        nums3.assign(s.begin(), s.end());
        return nums3;
        
    }
};