class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        for(int start=0;start<nums.size();start++)
        {
            int sum=0;
            for(int end=start;end<nums.size();end++)
            {
                sum+=nums[end];
                if(sum>max)
                    max=sum;
            }
            
        }
        return max;
    }
};
