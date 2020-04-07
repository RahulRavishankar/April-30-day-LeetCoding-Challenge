class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp=strs;
        int n=strs.size();
        map<string,vector<string> > m;
        for(int i=0;i<n;i++)
        {
            sort(temp[i].begin(),temp[i].end());
            if(m.find(temp[i])==m.end())
            {
                vector<string> t; t.push_back(strs[i]);
                m[temp[i]]=t;
            }
            else
                m[temp[i]].push_back(strs[i]);
        }
        vector<vector<string> > result;
        for(auto it=m.begin();it!=m.end();it++)
            result.push_back(it->second);

        return result;
    }
};
