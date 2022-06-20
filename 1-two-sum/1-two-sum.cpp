class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            int value = target - nums[i];
            if(m.find(value) != m.end()) {
                ans.push_back(i);
                ans.push_back(m.find(value)->second);
                break;
            } else {
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};