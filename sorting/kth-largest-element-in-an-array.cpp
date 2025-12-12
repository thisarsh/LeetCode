class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size(), i = 0;
        sort(nums.begin(), nums.end(), greater<>());
        // for(int it:nums){
        //     i++;
        //     if(i==k)break;
        // }
        return nums[n-k];
    }
};
