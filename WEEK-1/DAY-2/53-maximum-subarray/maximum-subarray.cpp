class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int sum=0;
int maxi=INT_MIN;
 for(int i=0;i<nums.size();i++){
    sum=sum+nums[i];
    maxi=max(maxi,sum);
    if(sum<0){
        sum=0;
    }
 }

return maxi;
    }
    };
    //      int maxsum=INT_MIN;
    //    for(int i=0;i<nums.size();i++){    code is ok but this is on n^2  so i got tle on 203/210 test case.
    //     int sum=0;
    //     for(int j=i;j<nums.size();j++){
    //        sum=sum+nums[j];
    //        maxsum=max(maxsum,sum);
    //     }
    //    } 
    //    return maxsum;
//     }
// };