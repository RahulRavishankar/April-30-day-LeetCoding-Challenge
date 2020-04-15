class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        vector<int> forward(nums.size());
        vector<int> backward(nums.size());
        
        int prod=1;
        forward[0]=1;
        for(int i=1;i<nums.size();i++)
            prod*=nums[i-1], forward[i]=prod;
        
        prod=1;
        backward[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--)
            prod*=nums[i+1], backward[i]=prod;
           
        for(int i=0;i<forward.size();i++)
            res.push_back(backward[i]*forward[i]);
        
        return res;
    }
};
