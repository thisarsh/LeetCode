class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size(),temp=k,ans=0;
        int l=0,r=0;
        while(r<n){
            if(nums[r]){
                r++;
            }
            else if(temp){
                temp--;
                r++;
            }
            else {
                ans=max(ans,r-l);
                l=r;
                temp=k;

            }

        }
        ans=max(ans,r-l);
        return ans;

        
    }
};