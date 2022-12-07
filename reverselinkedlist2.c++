/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
        ListNode* reverseList(ListNode* head) {
            ListNode * curr=head;
            ListNode *temp;
            ListNode *prev=NULL;
            while(curr!=NULL){
                temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;

            }
            return prev;
        }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
                  return head;
              }
        
          ListNode *start=NULL;
          ListNode *end=NULL;
          ListNode *start_prev=NULL;
          ListNode *end_next=NULL;
          int i=1;
          ListNode *curr=head;
          while(i<=right && curr!=NULL)
          {
              
              if(i<left)
              {
                  start_prev=curr;
            }
              else if(i==left){
                  start=curr;
                }
            if(i==right){
                end=curr;
                end_next=curr->next;
            }
              curr=curr->next;
              i++;

          }
          end->next=NULL;
          ListNode *ptr= reverseList(start);
          if(start_prev)
          {
              start_prev->next=end;
          }
          else{
              head=end;
          }
          start->next=end_next;
        
        return head;
    }
};