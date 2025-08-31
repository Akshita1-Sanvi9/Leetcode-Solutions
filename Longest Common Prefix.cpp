class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans="";
      
        for(int i=0;i<strs[0].size();i++){
             int j=1;           
            while(j<strs.size()){
            if(strs[0][i]!=strs[j][i])
            break;           
            else
            j++;}
            if (j==strs.size())
            ans+=strs[j-1][i];
            else
            break;
           
        }
        
        return ans;
    }

};