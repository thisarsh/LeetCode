class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector <vector <string>> ans;
        unordered_map <string , vector <string> > mpp;
        for(auto &it:strs){
            string temp=it;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(it);
        }
        for(auto &it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};