/* Structure of a Linked List Node
class Node {
    int data;
    Node next;

    Node(int x){
        data = x;
        next = null;
    }
}*/

class Solution {
    Node divide(Node head) {
        // code here
        Node dummy1 = new Node(-1);
        Node dummy2 = new Node(-1);
        Node even = dummy1;
        Node odd = dummy2;
        Node temp = head;
        
        while(temp != null){
            if(temp.data % 2 == 0){
                even.next = temp;
                even = even.next;
                temp = temp.next;
            }else{
                odd.next = temp;
                odd = odd.next;
                temp = temp.next;
            }
        }
        even.next = dummy2.next;
        head = dummy1.next;
        odd.next = null;
        return head;
    }
}
