class Solution {
public:
    long long powd(long long x,long long n){
        long long MOD=1000000007;
        // if(n<0 )return (1.0/powd(x,-n))%MOD;
        if(n==0)return 1;
        if(n%2==0)return powd((x*x)%MOD,n/2)%MOD;
        return (powd((x*x)% MOD,n/2)* x%MOD )%MOD;

    }
    int countGoodNumbers(long long n) {
        // if(n==1) return 5;
          long long MOD=1000000007;
        long long odd=n/2;
        long long even=n-odd;
        long long ans=(powd(5,even)*powd(4,odd)) %MOD;
        return ans;
        
    }
};