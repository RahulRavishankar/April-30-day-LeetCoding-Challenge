class Solution {
public:
    int findSum(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=pow((n%10),2);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        map<int,int> m;
        m[n]=1;
        while(n!=1)
        {
            n=findSum(n);
            if(m.find(n)!=m.end())
                return false;
            else
                m[n]=1;
        }
        return true;
    }
};
