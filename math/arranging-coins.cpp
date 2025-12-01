class Solution {
public:
    int arrangeCoins(int n) {
        long int  sum=0,i;
       for(i=1; i<=n; i++){
            sum+=i;
            if(sum==n) return i;
            else if(sum>n)return i-1;
       }
     return 0;  
    }
};