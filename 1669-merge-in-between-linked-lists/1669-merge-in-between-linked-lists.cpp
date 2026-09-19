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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* node = list1;
        for(int i=0; i<a-1; i++){
            node = node->next;
        }
        ListNode* remove = node->next;
        node->next = list2;
        ListNode* two = list2;
        while(two->next){
            two = two->next;
        }

        node = remove;
        for(int i=a; i<b; i++){
            node = node->next;
        }
        ListNode* temp = node->next;
        node->next = NULL;

        two->next = temp;

        return list1;
    }
};