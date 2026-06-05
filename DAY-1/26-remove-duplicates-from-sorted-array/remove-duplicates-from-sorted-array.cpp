class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(ans.empty() || ans.back()!=nums[i]){
            ans.push_back(nums[i]);
            k++;
        }
        }
        nums=ans;
       return k;
    }
};