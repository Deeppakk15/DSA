class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        sort(strs.begin(),strs.end());
        string temp="";
            string first=strs[0];
            string last=strs[strs.size()-1];
        int n = min(first.size(), last.size());
        for(int i=0;i<n;i++){
      if(first[i]==last[i]){
          temp.push_back(first[i]);
          continue;
          }
          else{
            break;
          }
        }
        return temp;
     }
};