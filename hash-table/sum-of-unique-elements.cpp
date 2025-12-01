class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        vector <int> hash(101,0);
        for(int i=0; i<n; i++){
            hash[nums[i]]++;

        }
        int sum=0;
        for(int i=0; i<=100; i++){
            if(hash[i]==1)sum+=(i);
        }return sum;
    }
};