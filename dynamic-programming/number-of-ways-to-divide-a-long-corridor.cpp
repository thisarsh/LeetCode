class Solution {
public:
    int numberOfWays(string corridor) {
        int ans=0,total=0,sum=0;
        for(auto it:corridor){
            if(it=='S')sum++;
        }
        if(sum==0 || sum%2!=0 )return 0;

        for(auto it:corridor){
            if(it=='S')total++;
            if(total>0 && total %2==0)ans++;
        }
        return ans-1;
    }
};