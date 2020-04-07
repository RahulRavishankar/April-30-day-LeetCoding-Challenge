class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=1; int profit=0; int cp,sp;
        int n=prices.end()-prices.begin();
        while(i<n)
        {
            //find cp
            while(i<n && prices[i]<=prices[i-1])
                i++;
            
            //find sp
            while(i<n && prices[i]>prices[i-1])
                i++;
            
            //find profit
            profit+=(sp-cp);
        }
        return profit;
    }
};
