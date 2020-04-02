class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
                m[nums[i]]=1;
            else
                m[nums[i]]=0;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
                return it->first;
        }
        return -1;
    }
};
