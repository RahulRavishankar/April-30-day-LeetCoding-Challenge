class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.end()-stones.begin();
        while(stones.end()-stones.begin()>1)
        {
            sort(stones.begin(),stones.end(),greater<int>());
            
            if(stones[0]==stones[1])
                stones.erase(stones.begin());
            else if(stones[0]<stones[1])
                stones[1]=stones[1]-stones[0];
            else
                stones[1]=stones[0]-stones[1];

            stones.erase(stones.begin());
        }
        if(stones.end()-stones.begin()==0)
            return 0;
        return stones[0];
    }
};
