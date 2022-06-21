class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.length();
        int c = 0;
        for(int i=0;i<n;i++) {
            if(s[i]==letter) {
                c++;
            }
        }
        cout<<c<<endl;
        cout<<n<<endl;
        int ans = (c * 100) / n;
         cout<<ans<<endl;
        return ans;
    }
};