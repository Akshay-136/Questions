class Solution {
public:
    bool isValid(string s) {
        stack <char> cx;
        if(s.size()==0 || s.size()==1){
            return false;
        }
        for(int i = 0 ; i<s.size();i++){
            if(cx.size()==0){
                cx.push(s[i]);
            }
            else if( (s[i]=='}' && cx.top()=='{') || (s[i]==')'&& cx.top()=='(') || (s[i]==']'&& cx.top()=='[') ){
    
                cx.pop();
            }
            else{
                cx.push(s[i]);
            }
        }
        if(cx.empty()){
            return true;
        }
        
            return false;
        
    }
};