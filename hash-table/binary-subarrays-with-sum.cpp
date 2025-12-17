class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
     int n=nums.size(),sum=0,tsum=0,l=0,r=0,count=0;
     while(r<n){
        while(r<n && tsum+nums[r]<=goal){
             tsum+=nums[r];
            if(tsum==goal) count++;
            r++;

        }
        while(nums[l]==0){
            count++;
            l++;
        }
        if(nums[l]==1){
            tsum--;
            l++;
        }
               
     }
    //   while(l<r && tsum==goal){
    //         if(nums[l]==0)count++;
    //         l++;
    //     }
     return count;
    

    }
};