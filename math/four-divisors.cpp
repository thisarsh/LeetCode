class Solution {
public:
int checker(int n){
    int count = 0, sum = 0;
    for(int i = 1; i <= (n); i++){
        if(n % i == 0 ){
            count++;
            sum += i;
        }
    }
    if(count == 4) return sum;
    return 0;
}

    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
       for(auto i:nums){
        ans+=checker(i);
       } 
       return ans;
    }
};