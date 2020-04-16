class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        int balance=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')   balance--;
            else            balance++;
            
            if(balance<0)
                return false;
        }
        
        balance=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='(')   balance--;
            else            balance++;
            
            if(balance<0)
                return false;
        }
        
        return true;
    }
};

/////////////////////////////
ALTERNATIVE SOLUTION
/////////////////////////////
class Solution {
public:
    bool checkValidString(string s) {
        vector<int> stack1, stack2;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                stack1.push_back(i);
            else if(s[i]=='*')
                stack2.push_back(i);
            else
            {
                if(!stack1.empty())
                    stack1.pop_back();
                else if(!stack2.empty())
                    stack2.pop_back();
                else
                    return false;
            }
        }
        
        while(!stack1.empty() && !stack2.empty())
        {
            if(stack1.back()>stack2.back())
                return false;
            stack1.pop_back();
            stack2.pop_back();
        }
        return stack1.size()==0;
    }
};
