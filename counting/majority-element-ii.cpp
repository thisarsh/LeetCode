class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=0,n2=-1,f1=0,f2=0;
        int n=nums.size();
        for(auto i: nums){
            if(i==n1) f1++;
            else if(i==n2) f2++;
            else if (f1==0) {
                n1=i;
                f1=1;
            }
            else if (f2==0) {
                n2=i;
                f2=1;
            }
            else{
                f1--;
                f2--;
            }
        }
        vector <int> ans;
        int f3=0,f4=0;
        for(auto i:nums){
            if(i==n1)f3++;
            if(i==n2)f4++;
        }
        if(f3>n/3) ans.push_back(n1);
        if(f4>n/3) ans.push_back(n2);
        return ans;
    }
};