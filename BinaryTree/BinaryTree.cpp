
# include <stdc++.h>

class Node
{
    public:
    Node lchild;
    int data;
    Node rchild;

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
        Node head=NULL;
        Node p=NULL;

        Node* pre_getAddr(Node* p,int leaf)
        {
           if(p.data==leaf)
           {
               return p;
           }
           preorder(p->lchild);
           preorder(p->rchild);
        }


        void preorder(Node *p)
        {
            cout<<p.data<<" ";
            preorder(p->lchild);
            preorder(p->rchild)
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
                p=pre_getAddr(p,leaf);
                if(dir=='l')
                {
                   p->lchild=new Node(ele);
                }
                else
                {
                   p->rchild=new Node(ele);
                }
            }
        }
}

int main()
{
    int choice,ele;
    BinaryTree bt=BinaryTree();
    while(true)
    {
        cout<<"1.append   2.preorder"<<endl;
        cout<<"Enter your choice";
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


    }
}
