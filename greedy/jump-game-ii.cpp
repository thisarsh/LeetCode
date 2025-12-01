class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),prev=nums[0],count=0;
        if(n==1)return 0;
        for(int i=0; i<n-1; i++){
            if(nums[i]>=prev){
                prev=nums[i];
                count++;
            }

        }
        return count;

    }
};