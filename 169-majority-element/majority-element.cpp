class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
        }
        for(auto it:mp){
          if((it.second >=n/2) && it.second >count){
            ans=it.first;
            count=it.second;
          }
        }
        return ans;
    }
};