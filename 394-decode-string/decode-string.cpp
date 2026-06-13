class Solution {
public:
    string decodeString(string s) {
       stack<pair<string,int>>st;
       int currntnum=0; 
       string currnt="";                  
           //stack is use to store previvously created string
           // and number of time we have to repeat currnt string
       for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            currntnum=currntnum*10+(s[i]-'0');
        }
        else if(s[i]=='['){
            st.push({currnt,currntnum});
            currnt="";
            currntnum=0;
        }
        else if(s[i]==']'){
           string prev=st.top().first;
           int num=st.top().second;
           st.pop();
         for(int i=0;i<num;i++){
            prev=prev+currnt;
         }
         currnt=prev;
        }
        else{
            currnt=currnt+s[i];
          }
       }
       return currnt;
    }
};