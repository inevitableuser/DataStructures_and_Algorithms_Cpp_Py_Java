# Runtime: 56 ms, faster than 99.03% of Python3 online submissions for Add Two Numbers.
# Memory Usage: 14.3 MB, less than 44.61% of Python3 online submissions for Add Two Numbers.


class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

class Solution:
    def addTwoNumbers(self, l1, l2):
        head=ListNode(0)
        p=head
        carry=0
        while l1!=None or l2!=None:
            x=0
            y=0
            if l1:
               x=l1.val
               l1=l1.next
            if l2:
                y=l2.val
                l2=l2.next
            
            val=x+y+carry

            p.next=ListNode(val%10)

            carry=val//10

            p=p.next
        
        if carry:
            p.next=ListNode(carry)

        return head.next
             


class Main:
   def main(self):
       list1=[9,9,9,9,9,9,9]
       list2=[9,9,9,9]
       count=0
       for i in list1:
           if count==0:
              l1=ListNode(i)
              p=l1
           else:
              p.next=ListNode(i) 
              p=p.next 
           count+=1

       count=0
       for j in list2:
            if count==0:
              l2=ListNode(j)
              p=l2
            else:
              p.next=ListNode(j) 
              p=p.next 
            count+=1  
           

       p=Solution().addTwoNumbers(l1,l2)

       while p!=None:
           print(p.val)
           p=p.next

if __name__=="__main__":
    Main().main()
