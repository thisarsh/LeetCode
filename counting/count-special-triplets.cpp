class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        unordered_map<int, vector<int>> mpp;

        // store indices for each value
        for (int i = 0; i < n; i++) {
            mpp[nums[i]].push_back(i);
        }

        // for each number, count how many times double exists
        for (auto val : nums) {
            auto it = mpp.find(2 * val);
            if (it != mpp.end()) {
                ans += it->second.size();   // FIXED: count always
            }
        }

        return ans;
    }
};
