class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroNode=0;
        for(int cur=0;cur<nums.size();cur++)
        {
            if(nums[cur]!=0)
                swap(nums[lastNonZeroNode++],nums[cur]);
        }
    }
};
