class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n=nums.size();
    int tsum=0,gsum=0,i=0;
    for(auto it:nums){
        gsum+=it;
    }
    for(int i=0; i<n; i++){
        if(tsum==(gsum-nums[i]-tsum))return i;
        tsum+=nums[i];
    }
    return -1;
    
    }
};