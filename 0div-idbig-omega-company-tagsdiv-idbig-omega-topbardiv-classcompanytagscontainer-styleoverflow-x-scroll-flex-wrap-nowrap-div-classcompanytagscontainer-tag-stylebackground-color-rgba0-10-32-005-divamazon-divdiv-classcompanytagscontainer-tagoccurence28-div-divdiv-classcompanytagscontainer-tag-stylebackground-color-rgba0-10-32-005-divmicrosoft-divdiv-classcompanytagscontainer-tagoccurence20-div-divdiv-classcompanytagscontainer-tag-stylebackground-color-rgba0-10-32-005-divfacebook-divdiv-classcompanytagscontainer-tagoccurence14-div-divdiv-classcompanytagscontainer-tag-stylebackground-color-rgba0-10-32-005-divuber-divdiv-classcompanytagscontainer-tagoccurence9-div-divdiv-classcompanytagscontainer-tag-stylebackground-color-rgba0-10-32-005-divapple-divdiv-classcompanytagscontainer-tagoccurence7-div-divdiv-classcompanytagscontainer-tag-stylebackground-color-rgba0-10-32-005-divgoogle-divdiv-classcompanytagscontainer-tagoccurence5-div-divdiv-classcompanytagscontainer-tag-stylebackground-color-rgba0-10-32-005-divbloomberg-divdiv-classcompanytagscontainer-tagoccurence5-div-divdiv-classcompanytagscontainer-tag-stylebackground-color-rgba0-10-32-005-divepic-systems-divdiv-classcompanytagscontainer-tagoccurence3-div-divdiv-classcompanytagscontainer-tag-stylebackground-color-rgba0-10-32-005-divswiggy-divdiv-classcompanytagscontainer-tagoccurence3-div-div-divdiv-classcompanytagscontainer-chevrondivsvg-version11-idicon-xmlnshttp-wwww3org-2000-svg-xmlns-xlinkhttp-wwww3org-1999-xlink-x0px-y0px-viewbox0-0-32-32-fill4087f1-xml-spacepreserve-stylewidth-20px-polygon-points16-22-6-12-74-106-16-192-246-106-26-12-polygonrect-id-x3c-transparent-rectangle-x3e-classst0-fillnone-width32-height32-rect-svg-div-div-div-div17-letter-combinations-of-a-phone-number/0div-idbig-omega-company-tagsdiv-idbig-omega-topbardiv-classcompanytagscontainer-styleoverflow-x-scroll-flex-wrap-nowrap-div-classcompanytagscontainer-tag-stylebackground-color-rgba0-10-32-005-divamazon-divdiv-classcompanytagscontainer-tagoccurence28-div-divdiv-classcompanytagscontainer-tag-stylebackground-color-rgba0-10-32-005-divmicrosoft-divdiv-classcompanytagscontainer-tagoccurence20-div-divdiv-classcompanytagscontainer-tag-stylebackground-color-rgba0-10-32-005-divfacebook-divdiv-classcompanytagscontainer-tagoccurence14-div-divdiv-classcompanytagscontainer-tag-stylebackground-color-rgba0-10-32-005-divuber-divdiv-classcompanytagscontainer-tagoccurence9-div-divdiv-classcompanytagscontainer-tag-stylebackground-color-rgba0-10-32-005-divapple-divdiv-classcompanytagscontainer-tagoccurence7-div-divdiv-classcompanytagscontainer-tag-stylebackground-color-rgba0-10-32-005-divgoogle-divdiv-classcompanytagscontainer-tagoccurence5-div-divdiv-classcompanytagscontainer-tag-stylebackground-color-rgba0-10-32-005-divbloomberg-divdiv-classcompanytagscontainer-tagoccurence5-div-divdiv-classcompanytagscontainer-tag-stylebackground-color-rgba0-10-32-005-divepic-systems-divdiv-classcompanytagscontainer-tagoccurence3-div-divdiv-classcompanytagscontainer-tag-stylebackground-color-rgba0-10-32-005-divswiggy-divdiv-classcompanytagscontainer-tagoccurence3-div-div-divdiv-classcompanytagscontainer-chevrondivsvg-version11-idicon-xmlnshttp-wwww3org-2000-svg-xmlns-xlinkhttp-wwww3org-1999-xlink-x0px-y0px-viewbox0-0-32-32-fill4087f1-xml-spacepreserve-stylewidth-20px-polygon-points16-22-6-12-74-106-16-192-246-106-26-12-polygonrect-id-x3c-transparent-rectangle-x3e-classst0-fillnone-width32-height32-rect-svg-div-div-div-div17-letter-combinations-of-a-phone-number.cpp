class Solution {
public:
    vector<string> letterCombinations(string digits) {

        

        vector<string> result { };
        string curr { "" };

        if (digits == "")
        {
            return result;
        }

        map<char, string> digitMap {
               { '2' , "abc" },
               { '3' , "def" },
               { '4' , "ghi" },
               { '5' , "jkl" },
               { '6' , "mno" },
               { '7' , "pqrs" },
               { '8' , "tuv" },
               { '9' , "wxyz" }
        };

        backtrack(digitMap, digits, result, curr, 0);

        return result;
    }

    void backtrack(map<char, string>& digitMap, string& digits, vector<string>& result, string& curr, int start)
    {
        if (start == digits.size())
        {
            result.push_back(curr);
        }

        for (char& c : digitMap[digits[start]])
        {
            curr += c;
            backtrack(digitMap, digits, result, curr, start + 1);
            curr.pop_back();
        }
    }
};