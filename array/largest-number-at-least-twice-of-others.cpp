class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int i,n=nums.size(),max1=-1, max2=-1,index=-1;
        for(i=0; i<n; i++){
            // if(nums[i]<=max1)continue;
            if(nums[i]>max1){max2=max1; max1=nums[i];index=i; }
            else if(nums[i]>max2 && nums[i]<max1)max2=nums[i];        }
        if(max1>=(2*max2))return index;
        return -1;
    }
};