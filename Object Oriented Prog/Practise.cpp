#include<iostream>
#include<list>
using namespace std; 

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *head=NULL;
        ListNode *cur=NULL;
        while(p1&&p2){
            if(head==NULL){
                if(p1->val<=p2->val){
                    head=cur=p1;
                    p1=p1->next;
                }else{
                    head=cur=p2;
                    p2=p2->next;
                }
            }else{
                if(p1->val<=p2->val){
                    cur->next=p1;
                    cur=p1;
                    p1=p1->next;
                }else{
                    cur->next=p2;
                    cur=p2;
                    p2=p2->next;
                }
            }
        }
        if(p1) cur->next=p1;
        if(p2) cur->next=p2;
        return head;
    }
};
Java:大数据超时
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        // Start typing your Java solution below
        // DO NOT write main() function
        if(l1==null) return l2;
        if(l2==null) return l1;
        ListNode p1=l1;
        ListNode p2=l2;
        ListNode head=null;
        ListNode cur=null;
        while(p1!=null&&p2!=null){
            if(head==null){
                if(p1.val<=p2.val){
                    head=cur=p1;
                    p1=p1.next;
                }else{
                    head=cur=p2;
                    p2=p2.next;
                }
            }else{
                if(p1.val<=p2.val){
                    cur.next=p1;
                    cur=p1;
                    p1=p1.next;
                }else{
                    cur.next=p2;
                    cur=p2;
                    p2=p2.next;
                }
            }
        }
        if(p1!=null) cur.next=p1;
        if(p2!=null) cur.next=p2;
        return head;
    }
}