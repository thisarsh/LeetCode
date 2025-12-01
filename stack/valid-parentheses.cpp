class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto it:s){
            if(it=='(' || it=='[' || it=='{') st.push(it);
            else if( st.top ()=='(' && it!=')') return 0;
            else if( st.top ()=='[' && it!=']') return 0;
            else if( st.top ()=='{' && it!='}') return 0;
            else st.pop();
        }
        return 1;
        
    }
};