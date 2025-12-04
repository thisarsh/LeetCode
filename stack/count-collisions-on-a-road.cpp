class Solution {
public:
    int countCollisions(string directions) {
        stack <char> st;
        int ans=0;
        st.push(directions[0]);

        for(auto it:directions){
          
           if(st.top()=='R' && it!='R'){
                if(it=='S')ans++;
                if(it=='L')ans+=2;
                st.pop();
                st.push('S');
            }
            else if(st.top()=='S'){
                if(it=='L'){
                    ans++;
                }

            }
        }
        return ans;
    }
};