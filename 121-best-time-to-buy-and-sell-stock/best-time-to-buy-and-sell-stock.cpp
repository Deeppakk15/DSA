class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        int ans=0;
        int smallestprice=prices[0];
     for(int i=1;i<prices.size();i++) {
          diff=prices[i]-smallestprice;  
          ans=max(ans,diff);
        smallestprice=min(smallestprice,prices[i]);
     }  
     return ans;
    }
};

//         int diff=0;        logic  is correct but got tle
//         int ans=0;
//      for(int i=0;i<prices.size();i++) {
//         for(int j=i+1;j<prices.size();j++){
//           diff=prices[j]-prices[i];  
//           ans=max(ans,diff);
//         }
//      }  
//      return ans;
//     }
// 