// Runtime: 28 ms, faster than 69.98% of C++ online submissions for Add Two Numbers.
// Memory Usage: 71.4 MB, less than 47.64% of C++ online submissions for Add Two Numbers.

#include <bits/stdc++.h>

using namespace std;
  
class ListNode 
{
  public:
    int val;
    ListNode *next;

   ListNode(int val)
   {
       this->val=val;
       this->next=NULL;
   }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode(0);
        l3->val=0;
        ListNode *p=l3;
        int carry=0;
        while(l1!=NULL || l2!=NULL)
        {
            int x=0;
            int y=0;
            
            if(l1)
            {
                x=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                y=l2->val;
                l2=l2->next;
            }

            int val=x+y+carry;

            carry=(int) val/10;
            val=val%10;

            p->next=new ListNode(val);
            p=p->next;
            p->val=val;
            
        }

        if(carry)
        {
            p->next=new ListNode(carry);
            p=p->next;
            p->val=carry;
        }

      return l3->next;
    }
};

int main()
{
    int l1[]={9,9,9,9,9,9,9};
    int l2[]={9,9,9,9};

    ListNode *list1=NULL,*list2=NULL,*p=NULL;

    int n1=sizeof(l1)/sizeof(l1[0]);

    int n2=sizeof(l2)/sizeof(l2[0]);

      
    for(int i=0;i<n1;i++)
    {
        if(i==0)
        {
            list1=new ListNode(l1[0]);
            p=list1;
        }
        else
        {
           p->next=new ListNode(l1[i]);
           p=p->next;
        }
    }

    for(int j=0;j<n2;j++)
    {
        if(j==0)
        {
            list2=new ListNode(l2[0]);
            p=list2;
        }
        else
        {
            p->next=new ListNode(l2[j]);
            p=p->next;
        }
    }
   
    ListNode *l3=NULL;
    Solution sol=Solution();

    l3=sol.addTwoNumbers(list1,list2);

    p=l3;
    while(p!=NULL)
    {
        cout<<p->val<<endl;
        p=p->next;
    }

}