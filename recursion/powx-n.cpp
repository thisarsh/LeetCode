class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) return 1/(myPow(x*x, -1 * n/2));
        if(n%2==1) return x * myPow(x*x, n/2);
        if(n==0)return 1;
    
        
        return myPow(x*x, n/2);
        
    }
};