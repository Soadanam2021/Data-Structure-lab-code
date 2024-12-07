#include<iostream>
using namespace std;

struct node
{
    int info;
    node* link;
};

void print(node* head)
{
    node* temp = head;
    cout << "\nStack: ";
    while(temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->link;
    }
    cout << "\n";
}

node* push(int info,node* head)
{
    node* temp;
    temp = new node();
    temp->info = info;
    temp->link = NULL;
    temp->link = head;
    head = temp;
    return head;
}

node* pop(node* head)
{
    if(head == NULL)
    {
        cout << "Stack is Empty!!!"<<"\n";
    }
    else
    {
        //cout << "Popped " << head->info << " from stack.\n";
        head = head->link;
        print(head);
        return head;
    }
}


int main()
{
    cout << "------Stack------\n\n";
    int n,i,j,choice,len = 0;
    node* head;
    node* temp,*temt;
    head = NULL;
    do
    {
        cout << "\n------MENU------\n";
        cout << "\nPress 1 to push an element into stack.\n";
        cout << "Press 2 to pop an element from stack.\n";
        cout << "Press 3 to print top element in stack.\n";
        cout << "Press 4 to Exit.\n";
        cout << "Enter choice:\n";
        cin >> choice;
        if(choice == 1)
        {
            cout << "\n----Push----\n\n";
            int item,loc;
            cout << "Enter the element you wish to push: ";
            cin >> item;
            head = push(item,head);
            print(head);
        }
        else if(choice == 2)
        {
            cout << "\n----Pop----\n\n";
            head = pop(head);

        }
        else if(choice == 3)
        {
            cout << "\n----Top----\n\n";
            cout << "Top element is " << head->info << endl;
        }
    }
    while(choice != 4);

    return 0;
}
