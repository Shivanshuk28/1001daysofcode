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
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* newnode=NULL;
        int sum=0;
        while(temp){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else if(temp->val==0 && sum!=0){
                ListNode* node=new ListNode(sum);
                if(newnode==NULL){
                    newnode=node;
                    head=newnode;
                    sum=0;
                }
                else{
                    newnode->next=node;
                    newnode=newnode->next;
                    sum=0;
                }
            }
            temp=temp->next;
        }
        return head;
            

    }
};