class Solution {
public:
 bool ans(float n){
          while(n>0){
            if(n==4 ||n==1)return 1;
            else if(n<4)return 0;
            n/=4;
          } return 0;
    }
    bool isPowerOfFour(int n) {
         return (ans(float(n)));
 
    }
};