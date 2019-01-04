class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a1 = l1;
        while(1){
            if((l1->val + l2->val) / 10 == 0){
                l1->val =l1->val + l2->val;
            }
            else{
                l1->val = (l1->val + l2->val) % 10;
                if(l1->next == NULL){
                    l1->next = (ListNode*)malloc(sizeof(ListNode));
                    l1->next->val = 1;
                    l1->next->next = NULL;
                } else {
                    l1->next->val +=1;
                }
            }
            if (l1->next != NULL || l2->next != NULL){
                if (l1->next == NULL){
                    l1->next = (ListNode*)malloc(sizeof(ListNode));
                    l1->next->val = 0;
                    l1->next->next = NULL;
                }
                l1 = l1->next;
                if (l2->next == NULL){
                    l2->next = (ListNode*)malloc(sizeof(ListNode));
                    l2->next->val = 0;
                    l2->next->next = NULL;
                }
                l2 = l2->next;
            } else
                break;
        }
        return a1;
    }
};