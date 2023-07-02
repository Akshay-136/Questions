class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1  ;
        string ans2  ;
        int n = word1.size();
        int m = word2.size();
        bool res = false;
        for(int i = 0 ; i<n ;i++){
            ans1 += word1[i];
        }
        for(int i = 0 ; i<m ;i++){
            ans2 += word2[i];
        }
        if(ans1==ans2){
            res=true;
        }
        return res;
    }
};