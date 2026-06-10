class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     vector<int>freq(26,0);
     vector<int>freqs2(26,0);
     for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
     }
     int left=0;
     int k=s1.length();
     for(int right=0;right<s2.length();right++){
         freqs2[s2[right]-'a']++;
        if(right>=k){
             freqs2[s2[left]-'a']--;
            left++;     
        }
         if(freq==freqs2){
                return true;
            } 
     }
     return false;
    }
};