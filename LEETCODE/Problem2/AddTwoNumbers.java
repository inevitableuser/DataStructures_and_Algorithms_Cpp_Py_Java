// Runtime: 1 ms, faster than 100.00% of Java online submissions for Add Two Numbers.
// Memory Usage: 39.1 MB, less than 86.75% of Java online submissions for Add Two Numbers.


import java.util.*;


class ListNode 
{
        int val;
        ListNode next;
        ListNode()
        {

        }
        ListNode(int val)
        { 
            this.val  = val;
            this.next = null;
        }
}


class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry;
        ListNode l3 = null,p=null;
        l3=new ListNode(0);
        p=l3;

        carry=0;

        while(l1!=null || l2!=null)
        {
           int x=0;
           int y=0;
           if(l1!=null)
           {
               x=l1.val;
               l1=l1.next;
           }
           if(l2!=null)
           {
               y=l2.val;
               l2=l2.next;
           }
           int val=x+y+carry;

           carry=val/10;

           val=val%10;

           p.next=new ListNode(val);


          p=p.next;

        }

       if(carry>0)
       {
          p.next=new ListNode(carry);
       }

        return l3.next;
    }
}


public class AddTwoNumbers
{
     public static void main(String[] args) {
         
        int[] l1=new int[] {9,9,9,9,9,9,9};

        int[] l2=new int[] {9,9,9,9};

        ListNode list1=null,list2=null;
        ListNode p=null;
        
        for(int i=0;i<l1.length;i++)
        {
            if(i==0)
            {
                list1=new ListNode(l1[0]);
                p=list1;
            }
            else
            {
                p.next=new ListNode(l1[i]);
                p=p.next;
            }
        }

        
        for(int i=0;i<l2.length;i++)
        {
            if(i==0)
            {
                list2=new ListNode(l2[0]);
                p=list2;
            }
            else
            {
                p.next=new ListNode(l2[i]);
                p=p.next;
            }
        }

        Solution sol=new Solution();
        ListNode list3=sol.addTwoNumbers(list1, list2);

        p=list3;
        while(p!=null)
        {
            System.out.println(p.val);
            p=p.next;
        }

     }
}