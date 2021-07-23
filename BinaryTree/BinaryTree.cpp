
# include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    Node* lchild;
    int data;
    Node* rchild;

    Node(int data)
    {
        this->lchild=NULL;
        this->data=data;
        this->rchild=NULL;
    }

};

class BinaryTree
{
    public:
        Node* head=NULL;
        Node *p,*q;
        
        void replace(int ele)
        {
            int node;
            Node *left, *right;
            cout<<"To which node you want to replace: ";
            cin>>node;
            p=head;
            pre_getAddr(p,node);
            q->data=ele;            
        }

        void pre_getAddr(Node* p,int leaf)
        {
            if(p==NULL)
            {
                return;
            }
           if(p->data==leaf)
           {
               q=p;
           }
           pre_getAddr(p->lchild,leaf);
           pre_getAddr(p->rchild,leaf);
        }

        
         void inorder(Node *p)
        {
            if(p==NULL)
            {
                return;
            }
            inorder(p->lchild);
            cout<<p->data<<endl;
            inorder(p->rchild);
        }

        void preorder(Node *p)
        {
            if(p==NULL)
            {
                return;
            }
            cout<<p->data<<endl;
            preorder(p->lchild);
            preorder(p->rchild);
        }

        void postorder(Node *p)
        {
            if(p==NULL)
            {
                return;
            }
            postorder(p->lchild);
            postorder(p->rchild);
            cout<<p->data<<endl;
        }
        
        
        void append(int ele)
        {
            int leaf;
            char dir;
            if(head==NULL)
            {
              head=new Node(ele);
            }
            else
            {
                cout<<"To which leaf you want to append: ";
                cin>>leaf;
                cout<<"Left(l) or right(r) ";
                cin>>dir;
                p=head;
                pre_getAddr(p,leaf);
                if(dir=='l')
                {
                   q->lchild=new Node(ele);
                }
                else if(dir=='r')
                {
                   q->rchild=new Node(ele);
                }
            }
        }
};

int main()
{
    int choice,ele;
    BinaryTree bt=BinaryTree();
    while(true)
    {
        cout<<"1.Append   2.PreOrder   3.InOrder   4.PostOrder   5.Replace   6.Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter your element: ";
            cin>>ele;
            bt.append(ele);
        }
        else if(choice==2)
        {
            bt.preorder(bt.head);
        }

        else if(choice==3)
        {
            bt.inorder(bt.head);
        }
        else if(choice==4)
        {
            bt.postorder(bt.head);
        }
        else if(choice==5)
        {
            cout<<"Enter your element to put: ";
            cin>>ele;
            bt.replace(ele);
        }
        else
        {
            cout<<"Exiting Program";
            break;
        }
    }
}
