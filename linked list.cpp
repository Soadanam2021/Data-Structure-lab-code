#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *link;
};

node *head;
class linkedlist
{
public :


    void Insert(int val)
    {
        node *newnode=new node();
        newnode->data=val;
        newnode->link=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            node *temp=head;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=newnode;
        }

    }

    void create()
    {
        int num,val,i;
        cout<<"Number of element :  "<<endl;
        cin>>num;
        cout<<"Enter elements : "<<endl;
        for(i=0; i<num; i++)
        {

            cin>>val;
            Insert(val);
        }
    }

    void print()
    {
        node *temp=head;
        cout<<"The Linked list is: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }

    void Insert_at_pos()
    {
        int val,pos;
        cout<<"Enter value : "<<endl;
        cin>>val;
        cout<<"Enter position : "<<endl;
        cin>>pos;

        node *newnode=new node();

        newnode->data=val;
        newnode->link=NULL;

        if(pos==1)
        {
            newnode->link=head;
            head=newnode;

        }
        else
        {
            node  *temp=new node();
            temp=head;
            for(int i=1; i<pos-1; i++)
            {
                temp=temp->link;
            }
            newnode->link=temp->link;
            temp->link=newnode;

        }

    }

    void Delete()
    {
        int pos;
        cout<<"Enter position : "<<endl;
        cin>>pos;
        node *pre=head;
        for(int i=1; i<pos-1; i++)
            pre=pre->link;
        node *curr=pre->link;
        pre->link=curr->link;
        free(curr);

    }
};
int main()
{
    linkedlist call;
    int val,pos,i;
    while(1)
    {
        cout<<"--------------------"<<endl;
        cout<<"\n1.Create a linked list."<<endl;
        cout<<"2.Display."<<endl;
        cout<<"3.Insert at any position."<<endl;
        cout<<"4.Delete"<<endl;
        cout<< "5.Finish "<<endl;
         cout<<"\n--------------------"<<endl;
        int i;
        cin>>i;
        if(i==1){
		call.create();
	}
        if(i==2){
		call.print();
	}
        if(i==3){
		call.Insert_at_pos();
	}
        if(i==4){
		call.Delete();
	}
        if(i==5) return 0;

    }
    return 0;
}
