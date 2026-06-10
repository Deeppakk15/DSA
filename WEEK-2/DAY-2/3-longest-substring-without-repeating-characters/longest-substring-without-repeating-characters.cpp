class Solution {
public:
    int lengthOfLongestSubstring(string s) {
unordered_set<char>mp;
int left=0;
int right=0;
int len=0;
int maxlen=0;
for(int right =0;right<s.length();right++){
len++;
if(mp.count(s[right])==0){  //notpresent
 mp.insert(s[right]);
}
else{
    while(mp.count(s[right])==1){
        mp.erase(s[left]);
        left++;
        len--;
    }
    mp.insert(s[right]);    
}
maxlen=max(maxlen,len);
}
return maxlen;
}
 };










    // }






//      vector<bool>count(256,0);     
// //    unordered_map<char, int> count;
// //    using map  // you not need to initlaize 0 in map if value exist it give 1 otherwise give 0 
// int left=0;
// int right=0;
// int len=0;
// while(right<s.length()){
//     if(count[s[right]]==0){
//      count[s[right]]=1;
//      len=max(len,right-left+1);
//      right++;
//     }
//     else{
//     while( count[s[right]]==1){
//         count[s[left]]=0;
//          left++;
//     }
//     }
// }
//     return len;
//     }
// };