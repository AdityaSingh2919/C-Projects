/* Structure of Linked List Node
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}*/

class Solution {
    public int lengthOfLoop(Node head) {
        // code here
        Node fast=head,slow=head;
        int count=0;
        
        while(fast != null && fast.next!=null){
           
                // return true;
                
            slow=slow.next;
            fast=fast.next.next;
             if(slow==fast){
                count=1;
                slow=slow.next;
                while(slow != fast){
                    count++;
                    slow=slow.next;
                }
                 return count;
            }
        }
        
         return 0;   
    }
}
