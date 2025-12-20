class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size(),ans=0,l=0,r=0;
        unordered_map <int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;       
            }
              if(mpp.size()==k)ans+=mpp[nums[i]];
          


        }
        return ans+1;


        
    }
};