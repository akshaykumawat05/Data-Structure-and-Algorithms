class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;

        for (auto x : nums) {
            st.insert(x);
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;
        ListNode* node = head;

        while (node != nullptr) {
            if (st.find(node->val) != st.end()) {
                curr->next = node->next;
                node = node->next;
            }
            else {
                curr = node;
                node = node->next;
            }
        }

        return dummy->next;
    }
};