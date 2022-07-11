class Solution {
public:
    int binarySearch(vector<int>& nums, int s, int e, int t) {
        int m = (s + e)/2;
        while(s <= e) {
            if(nums[m] == t) {
                return m;
            } 
            if( t > nums[m] ) {
                return binarySearch(nums, m+1,e, t);
            } 
                return binarySearch(nums, s, m-1, t);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        return binarySearch(nums, s, e,target);
    }
};