class Solution {
public:
    int countElements(vector<int>& arr) {
        int n=arr.size();
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            if(m.find(arr[i])==m.end())
                m[arr[i]]=0;
            m[arr[i]]++;
        }
        int count=0;
        auto it=m.begin(); 
        auto prev=it;
        it++;
        for(;it!=m.end();it++)
        {
            if(it->first - prev->first ==1)
                count+=prev->second;
            prev=it;
        }
        return count;
    }
};
