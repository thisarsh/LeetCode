class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; i<n;i++){
            if(pow(2,i)==n)return 1;
            else if(pow(2,i)>n) return 0;
        }return 0;
    }
};