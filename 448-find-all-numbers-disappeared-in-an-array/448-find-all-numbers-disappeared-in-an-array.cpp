class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v((nums.size()+1), false);
        vector<int> ans;
        for(auto x:nums) {
            v[x]=true;
        }
        for(int i=1;i<=nums.size();i++) {
            if(v[i]==false) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};