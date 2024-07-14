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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> s(begin(nums), end(nums));

        ListNode* cur = head;
        ListNode* prev = 0;

        for( ; cur ; cur = cur->next){
            if(s.find(cur->val) != s.end()){
                if(cur == head) head = head->next;
                else prev->next = cur->next;  
            }
            else prev = cur;
        }

        return head;
    }
};