class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int> s;
        for(int i=0;i<n;i++) {
            s.insert(candyType[i]);
        }
        int z = s.size();
        int ans = n/2 > z ? z : n/2;
        return ans;
    }
};