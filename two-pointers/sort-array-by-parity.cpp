class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n=nums.size(),i=0,j;
        j=n-1;
        if(n==1)return nums;
        while( i<j){
            if(nums[i]%2!=0 && (nums[j])%2==0){
                swap(nums[i],nums[j]);
                i++;
                j--;
                
            }
            else if((nums[i])%2==0){
                i++;
                
                }   
            else if(nums[j]%2!=0){
                j--;
            }

        }
        return nums;
    }
};