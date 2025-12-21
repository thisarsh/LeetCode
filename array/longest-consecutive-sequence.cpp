class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int ans=0,len=0;
    unordered_set <int> st(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){

        if(st.count(nums[i]-1)){
            int curr=nums[i];
            len=1;
            while(st.count(curr)){
                curr++;
                len++;
            }

        }
        
        ans=max(len,ans);
     
    }
return ans;


        // int n=nums.size(),ans=1,temp=1;
        // if(n==0)return 0;
        // int mini=*min_element(nums.begin(),nums.end());
        // map <int,int> mpp;
        // for(auto it:nums){
        //     mpp[it]++;
        // }
        // for(auto it:mpp){
        //     if(mpp.find(it.first+1)!=mpp.end()){
        //         temp++;
        //         ans=max(temp,ans);
                
        //     }
        //     else temp=1;

        // }
        // return ans;
    }
};
// auto init = atexit([](){ofstream("display_runtime.txt")<<"0";});