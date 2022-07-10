class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool valid = false;
        if(s.length() % 2 != 0) return false;
        for(int i=0;i<s.length();i++) {
            int curr = s[i];
            if(curr == '(' || curr == '{' || curr == '[') {
                st.push(curr);
            }
            else {
                if(st.empty()) return false;
                int top = st.top();
                if((top == '(' && curr == ')') ||
                  (top == '{' && curr == '}') ||
                  (top == '[' && curr == ']')) {
                         st.pop();
                }
                else {
                    return false;
                }
            }
        }
        if(st.empty()) {
            return true;
        }
        else {
            return false;
        } 
            
    }
};