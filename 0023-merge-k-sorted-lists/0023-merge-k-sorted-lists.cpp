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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        return nullptr;
        vector<int>a;
       for(int i=0;i<lists.size();i++)
       {
        ListNode*temp=lists[i];
        while(temp!=nullptr)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
       }
       if(a.empty())
       return nullptr;
       sort(a.begin(),a.end());
       ListNode*head=new ListNode(a[0]);
       ListNode*temp=head;
       for(int i=1;i<a.size();i++)
       {
        temp->next=new ListNode(a[i]);
        temp=temp->next;
       }
       return head;
    }
};