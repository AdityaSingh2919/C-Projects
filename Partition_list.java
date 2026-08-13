/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode partition(ListNode head, int x) {
       ListNode temp=head;
       ListNode dummyLess=new ListNode(-1); 
       ListNode less=dummyLess;
       ListNode dummyGreater=new ListNode(-1);
       ListNode greater=dummyGreater;

       while(temp != null){
        if(temp.val < x){
            less.next=temp;
            less=less.next;
            temp=temp.next;
        }else if(temp.val >=x){
            greater.next=temp;
            greater=greater.next;
            temp=temp.next;
        }
       }
       less.next=dummyGreater.next;
       head=dummyLess.next;
       greater.next=null;
       return head;


    }
}
