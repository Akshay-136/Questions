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
   ListNode* sortList(ListNode* head) {
        vector<int> a;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        sort(a.begin(),a.end());
        std::vector<int>::iterator itr=a.begin();
        temp=head;
        while(itr!=a.end())
        {
            temp->val=*itr;
            temp=temp->next;
            itr++;
        }
        return head;
    }
    
};