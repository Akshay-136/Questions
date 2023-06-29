
class Solution {
public:
    bool rotateString(string s, string goal) {
        bool ans = false;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            rotate(s.begin(), s.begin() + 1, s.end()); // Rotate by 1 position
            
            if (s == goal) {
                ans = true;
                break; // Exit the loop if s matches goal
            }
        }
        
        return ans;
    }
};
