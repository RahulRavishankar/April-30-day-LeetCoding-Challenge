class Solution {
public:
    int binarySearch(vector<int> &nums, int l,int u,int target)
    {
        
        while(l<=u)
        {
            int mid=(l+u)/2;
            if(nums[mid]==target)
                return mid;
            else if(target<nums[mid])
                u=mid-1;
            else 
                l=mid+1;
        }
        return -1;
    }
    int findPivot(vector<int> &nums, int low,int high)
    {
        if(high<low)
            return -1;
        
        if(low==high)
            return low;
        
        int mid=(low+high)/2;
        if(mid<high && nums[mid]>nums[mid+1])
            return mid;
        
        if(mid>low && nums[mid]<nums[mid-1])
            return mid-1;
        
        if(nums[low]<nums[mid])
            return findPivot(nums,mid+1,high);
        
        return findPivot(nums,low,mid);
    }
    int search(vector<int>& nums, int target) {
        int p=findPivot(nums,0,nums.size()-1);
        
        int res=binarySearch(nums,0,p,target);
        if(res!=-1)
            return res;
            
        return binarySearch(nums,p+1,nums.size()-1,target);
    }
};
