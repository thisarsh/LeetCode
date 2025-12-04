class Solution {
public:
    int countCollisions(string directions) {
        char prev=directions[0];
        int ans=0;
        for(auto it:directions){
            if(prev=='R' && it=='L'){
                ans+=2;
                prev='S';
            }
            else if(prev=='R' && it=='S'){
                ans++;
                prev='S';
            }
            else if(prev=='S' && it=='L'){
                ans++;
                prev='S';
            }
            else prev=it;
        }
        return ans;
    }
};