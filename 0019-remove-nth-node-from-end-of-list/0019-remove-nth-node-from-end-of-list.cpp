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
    
/*-----------------0(n) Approach--------------------*/
    
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* slow = start;
        ListNode* fast = start;

        for(int i=1;i<=n;i++)
         fast = fast->next;

        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return start->next;
        
        
/*---------------O(2n) Approach-------------------*/
        
        /* ListNode* temp = head;
        int cnt = 0;

        if(head->next == NULL)
        {
            head = NULL;
            return head;
        }
       
        while(temp != NULL)
        {
            temp = temp -> next;
            cnt++;
        }

        if(cnt == n)
        {
            ListNode* tempo = head;
            head = head->next;
            tempo->next = NULL;
            delete tempo;
            return head;
        }

        int pos = cnt - n;
        int goal = 0;
        ListNode* tempo = head;
        ListNode* prev = NULL;
        
        while(pos != goal)
        {
            prev = tempo;
            tempo = tempo->next;
            goal++;
        }


        prev->next = tempo->next;   //no need for if(prev == NULL) .............
        tempo->next = NULL;
        delete tempo;


        return head;

        */
    }
};