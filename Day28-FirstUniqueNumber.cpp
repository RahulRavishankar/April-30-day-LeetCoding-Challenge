class FirstUnique {
public:
    queue<int> q;
    map<int,int> m;
    FirstUnique(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
            if(m.find(nums[i])==m.end())
                m[nums[i]]=0;
            m[nums[i]]++;
        }
    }
    
    int showFirstUnique() {
        while(!q.empty())
        {
            if(m[q.front()]==1)
                return q.front();
            q.pop();
        }
        return -1;
    }
    
    void add(int value) {
        q.push(value);
        if(m.find(value)==m.end())
        {
            m[value]=1;
            return;
        }
        m[value]++;
    
    }
};
