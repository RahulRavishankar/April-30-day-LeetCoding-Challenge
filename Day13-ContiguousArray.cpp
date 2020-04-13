class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        m[0]=-1;
        int count=0;
        int maxLen=0;
        for(int i=0;i<n;i++)
        {
            count+=nums[i]==1?1:-1;
            if(m.find(count)==m.end())
                m[count]=i;
            else
                maxLen=max(maxLen,i-m[count]);
        }
        return maxLen;
    }
};
