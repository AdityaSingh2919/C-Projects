/*
class Node {
    int data;
    Node next;

    Node(int d)
    {
        data = d;
        next = null;
    }
}*/

class Solution {
    public Node segregate(Node head) {
        // code here
        Node temp=head;
        ArrayList<Integer> list=new ArrayList<>();
        
        while(temp != null){
            list.add(temp.data);
            temp=temp.next;
        }
        Collections.sort(list);
        temp=head;
        
        for(int i=0;i<list.size();i++){
            temp.data=list.get(i);
            temp=temp.next;
        }
        return head;
    }
}
