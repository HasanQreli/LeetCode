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
#include <cmath>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int remain =0 , result;
        ListNode *l1first =l1;
        while(l1 && l2){
            result = l1->val + l2->val + remain;
            if(result >= 10) remain=1;
            else remain=0;
            l1->val = result%10;
            if(l1->next){
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l2->next){
                
                l1->next = l2->next;
                l1 = l1->next;
                break;
            }
            else if(remain){ 
                l1->next = new ListNode(remain);
                
                return l1first;
            }
            else break;
        }
        while(remain){
            result = l1->val + remain;
            if(result >= 10) remain=1;
            else remain=0;
            l1->val = result%10;
            if(l1->next){
                
                l1=l1->next;
            }
            else if(remain){ 
                l1->next = new ListNode(remain);
                
                return l1first;
            }
        }
        
        return l1first;
        
        
        

    }
};
