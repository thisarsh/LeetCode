class Solution {
public:
    bool checkValidString(string s) {
        int star=0,curr=0;
        for(auto it:s){
            if(it=='(')curr++;
            else if(it==')')curr--;
            else star++;
        }
        if(curr==0 || abs(curr)==star)return 1;
       return 0;
    }
};