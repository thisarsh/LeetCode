class Solution {
public:
    int mySqrt(int x) {
        if(x<2)return x;
        long long low=1,high=x/2;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long curr=mid*mid;
            if(curr==x)return mid;
            else if(curr<x){
                low=mid+1;
            }
            else high=mid-1;
        }
        return high;
    }
};