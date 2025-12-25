class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0;
        int total=0;//cards used
        int n=cardPoints.size();
        int l=0,r=n-1;
        while(total<k){
         
            if(cardPoints[l]<cardPoints[r]){
                ans+=cardPoints[r--];
            }
            else if(cardPoints[r]<cardPoints[l]){
                ans+=cardPoints[l++];
            }
            else{
                ans+=cardPoints[l];
                l++;
                r--;
            }

           
            total++;

        }
        return ans;
        
    }
};