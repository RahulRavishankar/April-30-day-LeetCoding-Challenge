class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int m=S.length();
        int n=T.length();
        string x,y;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(S[i]=='#')
            {
                if(x.length()>0)
                    x.pop_back();
            }
            else
                x.push_back(S[i]);
            
            if(T[j]=='#')
            {
                if(y.length()>0)
                    y.pop_back();
            }
            else
                y.push_back(T[j]);
            
            i++; j++;
        }
    
        while(i<m)
        {
            if(S[i]=='#')
            {
                if(x.length()>0)
                    x.pop_back();
            }
            else
                x.push_back(S[i]);
            i++;
        }
        while(j<n)
        {
            if(T[j]=='#')
            {
                if(y.length()>0)
                    y.pop_back();
            }
            else
                y.push_back(T[j]);
            
            j++;
        }
      
        if(x==y)
            return true;
        return false;
    }
};
