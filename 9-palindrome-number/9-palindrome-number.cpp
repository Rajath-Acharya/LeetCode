class Solution {
public:
    bool isPalindrome(int x) {
        int y=x,reverse = 0;
        if(x<0) return 0;
        
        while(y !=0) {
            int digit = y % 10;
            if(reverse > INT_MAX/10 ||
              reverse < INT_MIN/10) {
                return 0;
            }
            reverse = reverse*10 + digit;
            y = y / 10;
        }    
        return (x == reverse);
    }
};