class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
 double maxi=0;
 double average=0;
 double sum=0;
 int i=0;
 for(i=0;i<k;i++){
     sum=sum+nums[i];
 }
 maxi=sum;
for(int j=k;j<nums.size();j++){
    sum=sum+nums[j]-nums[j-k];
    if(sum>maxi){
        maxi=sum;
    }
    
}
average=maxi/k;
return average;
    }
};


  // brute force   but giving tle

    //    double maxi=-1e9;
    //     for(int i=0;i<=nums.size()-k;i++){
    //      double average=0;
    //     double sum=0;
    //       for(int j=i;j<i+k;j++) {
    //             sum=sum+nums[j];
               
    //         }
    //          average=sum/k;
    //      if(average>maxi){
    //        maxi= average;
    //       } 
    //     }
    //     return maxi;
    // }