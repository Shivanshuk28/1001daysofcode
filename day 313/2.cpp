/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode  *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode* temp=list1;
        ListNode* node1=list1;
        ListNode* node2=list1;
        //in this solving we stored both the values of reache=ing the a-1 and b+1
        // and in the other loop we attached these nodes with them
        while(temp!=NULL){
            if(count==a-1){
                node1=temp;
            }
            if(count==b+1){
                node2=temp;
            }
            count++;
            temp=temp->next;
        }
        //to the last of list2
        ListNode* temp2=list2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=node2;
        node1->next=list2;
        return list1;

    }
};