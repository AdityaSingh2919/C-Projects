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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
       
        ListNode prev = null;
        ListNode temp = head;
       
        
        if (head == null)
            return null;
         if(head.next==null) return null ;

         ListNode next = head.next;

        while (temp != null) {
            temp.next = prev;
            prev = temp;
            temp = next;
            if (next != null) {
                next = next.next;
            }

        }
        head = prev;
        // deleting
        temp = head;
        // next = temp.next;
        if(n==1){
           head=head.next;
        }
        else{
        for (int i = 1; i < n-1 ; i++) {

            temp = temp.next;
        }
         if (temp.next != null){
            temp.next = temp.next.next;
        }
        }

       

    // reverse again

        prev = null;
        temp = head;
        next = head.next;
        while (temp != null) {
            temp.next = prev;
            prev = temp;
            temp = next;
            if (next != null) {
                next = next.next;
            }

        }
        head = prev;
        return head;
    }
}
