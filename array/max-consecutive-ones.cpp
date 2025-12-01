class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n=nums.size(),temp=0,ans=0;
        for(auto it: nums){
            if(it==0)temp=0;
            else {
                temp++;
                ans=max(temp,ans);
            }
        }
        ans=max(temp,ans);
        return ans;
        
    }
};