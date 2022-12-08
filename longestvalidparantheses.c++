class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int>stack;
       int maxLength=0;
       stack.push(-1);
       for(int i=0;i<s.size();i++){
           if(s[i]== '('){
               stack.push(i);
           }
           else{
               stack.pop();
               if(stack.empty()){
                   stack.push(i);
               }
               else{
                   maxLength = max(maxLength, i-stack.top());
               }
           }
       } 
       return maxLength;
    }
};