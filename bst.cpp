#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int value;
node* left;
node* right;
};
void print(node* head);
using namespace std;
node* create(int data);
node* insert(node* nnode,int data);
node* minvalue(node* root);
node* delet(node* root,int key);
void inorder(node* root);
void postorder(node* root);
void preorder(node* root);
void print(node* head)
{
while(1)
{
cout<<endl<<endl;
cout<<"*********************************************"<<endl;
cout<<"** Enter 1 to Print BST Pre Order **"<<endl;
cout<<"** Enter 2 to Print BST In Order **"<<endl;
cout<<"** Enter 3 to Print BST Post Order **"<<endl;
cout<<"** Enter -1 to Return **"<<endl;
cout<<"*********************************************"<<endl;
int choice;
cin>>choice;
if(choice==1)
{
preorder(head);
cout<<"NULL"<<'\n';
}
else if(choice==2)
{
inorder(head);
cout<<"NULL"<<'\n';
}
else if(choice==3)
{
postorder(head);
cout<<"NULL"<<'\n';
}
else
{
return;
}
}
//inorder(head);
}
node* create(int data)
{
node *newnode=new node();
newnode->value=data;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
void inorder(node* root)
{
if(root!=NULL)
{
inorder(root->left);
cout<<root->value<<" -> ";
inorder(root->right);
}
}
void preorder(node* root)
{
if(root==NULL)return;
cout<<root->value<<" -> ";
preorder(root->left);
preorder(root->right);
//cout<<"NULL";
}
void postorder(node* root)
{
if(root==NULL)return;
postorder(root->left);
postorder(root->right);
cout<<root->value<<" -> ";
//cout<<"NULL";
}
node* insert(node* nnode,int data)
{
if(nnode==NULL)
{
return create(data);
}
if(data<nnode->value)
{
nnode->left=insert(nnode->left,data);
}
else
{
nnode->right=insert(nnode->right,data);
}
return nnode;
}
node* minvalue(node* root)
{
node *temp=root;
while(temp&&temp->left!=NULL)
{
temp=temp->left;
}
return temp;
}
node* delet(node* root,int key)
{
if(root==NULL)
{
return root;
}
if(key<root->value)
{
root->left=delet(root->left,key);
}
else if(key>root->value)
{
root->right=delet(root->right,key);
}
else
{
if(root->left==NULL)
{
node* temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL)
{
node* temp=root->left;
free(root);
return temp;
}
else
{
node* temp=minvalue(root->right);
root->value=temp->value;
root->right=delet(root->right,temp->value);
}
}
return root;
}
int main()
{
node *head=NULL;
while(1)
{
cout<<endl<<endl;

cout<<" Enter 1 to Insert Elements to BST "<<endl;
cout<<" Enter 2 to Delete Element to BST\n "<<endl;
cout<<" Enter 3 to Traverse The BST\n"<<endl;
cout<<" Enter 0 to Exit The Program\n"<<endl;
int choice;
cin>>choice;
if(choice==1)
{
cout<<endl<<endl;

cout<<" Enter 1 to Insert Multiple Element\n"<<endl;
cout<<" Enter 2 to Insert One Element\n"<<endl;

int ch;
cin>>ch;
if(ch==1)
{
cout<<"Enter number of element do you want to enter:\n";
 int x; 
 cin>>x;
cout<<"Enter elements:\n";
for(int k=1;k<=x;k++)
{
int num;
cin>>num;
head=insert(head,num);
}
}
else if(ch==2)
{
cout<<"Enter Element: "; int num; cin>>num;
head=insert(head,num);
}
}
else if(choice==2)
{
cout<<"Enter Element Do You Want to Delete: "<<endl;
int num;
cin>>num;
head=delet(head,4);
}
else if(choice==3)
{
print(head);
}
else if(choice==-1)
{
break;
}
}
return 0;
}

