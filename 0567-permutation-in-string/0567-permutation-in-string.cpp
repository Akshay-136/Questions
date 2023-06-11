class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       sort(s1.begin(),s1.end());
       int i = 0;
       while((i+s1.size() )<= s2.size()){
            string s = s2.substr(i,s1.size());
            sort(s.begin(),s.end());
            if(s == s1) return true;
            i++;
       }
       return false;
    }
};