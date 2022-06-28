class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int i=0, sum=0, max_sum;
    while(i<nums.size())
    {
        sum=sum+nums[i];
        
        if(i==0)
        {
            max_sum=sum;
        }
        else if(i!=0)
        {
            if(max_sum<sum)
            {
                max_sum=sum;
            }
        }
        
        if(sum<0)
        {
            sum=0;
        }
        
        i++;
    }
    
    return max_sum;
    }
};