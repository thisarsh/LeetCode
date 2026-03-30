class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0],count=0;
        for(auto it:nums){
            if(it==ans)count++;
            else count--;
            if(count==0) {
                ans=it;
                count++;
            }
        }
        return ans;
    }
};