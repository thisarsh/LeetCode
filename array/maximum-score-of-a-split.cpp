class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();

        vector<int> smin(n);
        smin[n-1] = nums[n-1];

        for (int i = n-2; i >= 0; i--) {
            smin[i] = min(smin[i+1], nums[i]);
        }
        
        long long p = 0;
        long long ans = LLONG_MIN;

        for (int i = 0; i < n-1; i++) {   
            p += nums[i];                
            ans = max(ans, p - smin[i+1]);
        }

        return ans;
    }
};
