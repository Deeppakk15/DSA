class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n/2;i++){
           string temp= s.substr(0,i+1);
          for(int j=0;j<n/temp.size();j++){
            // ans=ans+temp;
            ans+=temp;
          }
         if(ans==s){
            return true;
        }   
        temp.clear();
        ans.clear();
        } 
        return false;
    }
};