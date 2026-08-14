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
    public ListNode oddEvenList(ListNode head) {
       ListNode temp=head;
       ListNode evenNode=new ListNode(-1);
       ListNode even=evenNode; 
       ListNode oddNode=new ListNode(-1);
       ListNode odd=oddNode;
        int count=1;
       while(temp != null){
        if(count % 2==0){
            count++;
            even.next=temp;
            even=even.next;
            temp=temp.next;
        }
        else if(count % 2==1){
            count++;
            odd.next=temp;
            odd=odd.next;
            temp=temp.next;
        }
       } 
       odd.next=evenNode.next;
       oddNode=oddNode.next;
       head=oddNode;
       even.next=null;
       return head;
    }
}
