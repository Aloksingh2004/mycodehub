class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>stack;
        
       for(char ch : s){
           if(ch == '('){
               stack.push(-1);
           }
           else{
               if(stack.top() == -1){
                   stack.pop();
                   stack.push(1);

               }
               else{
                   int total=0;
                   while(stack.top() != -1){
                       total += stack.top();
                       stack.pop();
                   }
                   stack.pop();
                   stack.push(2*total);
               }
           }
       }
       int ans=0;
       while(!stack.empty()){
           ans+=stack.top();
           stack.pop();
       }
       return ans;
    }
};