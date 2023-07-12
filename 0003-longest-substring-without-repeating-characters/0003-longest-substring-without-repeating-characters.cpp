class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int temp = 0;
        int count = 1;
        int start = 0;
        unordered_set<char> uniqueChars;
        if(n==0){
            count = 0;
        }

        for (int i = 0; i < n; i++) {
            while (uniqueChars.count(s[i]) > 0) {
                uniqueChars.erase(s[start]);
                start++;
            }
            uniqueChars.insert(s[i]);
            temp = i - start + 1;
            count = max(count, temp);
        }
        return count;
    }
};
