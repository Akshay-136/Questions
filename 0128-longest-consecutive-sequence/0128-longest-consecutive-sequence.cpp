class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        int ans=1;
        int n = nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count =1;
        int prev = nums[0];
        for(int i = 1 ; i<n;i++){
            if(nums[i]==prev+1){
                count++;
            }
            else if(nums[i]!=prev){
                count=1;
            }
            prev=nums[i];
            ans=max(count,ans);
            
        }
        return ans;
    }
};