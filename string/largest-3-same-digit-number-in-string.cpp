class Solution {
public:
    string largestGoodInteger(string num) {
       
        int n=num.size(),k=-1;
        for(int i=0 ; i<n-2; i++){
            if((num[i]==num[i+1]) && (num[i+1] ==num[i+2]) && ( num[i]== num[i+2])){
                k=max(k,(num[i]-'0'));

            }


        }
        if(k==-1)return "";
         string s(3,k+'0');
         return s;
         


        
    }
};