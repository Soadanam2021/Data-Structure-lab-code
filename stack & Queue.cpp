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

node* mpush(int info,node* temt)
{
    node* temp;
    temp = new node();
    temp->info = info;
    temp->link = NULL;
    temp->link = temt->link;
    temt->link = temp;
    temt = temp;
    return temt;
}

node* pop(node* head)
{
    head = head->link;
    return head;
}


int main()
{
    int choice2;
    do
    {
        cout << "\n----STACK-QUEUE----\n";
        cout << "\n 1 for Stack.\n";
        cout << " 2 for queue.\n";
        cout << " 3 to exit.\n";
        cout << "Enter choice: ";
        cin >> choice2;
        if(choice2 == 1)
        {

            int n,i,j,choice,len = 0;
            node* head;
            node* temp,*temt;
            head = NULL;
            do
            {
                cout << "\nStack\n\n";
                cout << "\n 1 to push \n";
                cout << " 2 to pop \n";
                cout << " 3 to print top\n";
                cout << " 4 to Exit.\n";
                cout << "Enter choice: ";
                cin >> choice;
                if(choice == 1)
                {
                    cout << "\nPush\n\n";
                    int item,loc;
                    cout << "Enter the element to push: ";
                    cin >> item;
                    head = push(item,head);
                    cout << "\nStack : ";
                    print(head);
                }
                else if(choice == 2)
                {
                    cout << "\nPop\n\n";
                    if(head == NULL)
                    {
                        cout << "\nStack is empty!!\n\n";
                    }
                    else
                    {
                        head = pop(head);
                        cout << "\nStack : ";
                        print(head);
                    }
                }
                else if(choice == 3)
                {
                    cout << "\nTop\n\n";
                    cout << "Top element is " << head->info << endl;
                }
            }
            while(choice != 4);
        }
        else if(choice2 == 2)
        {

            int n,i,j,choice,len = 0;
            node* head;
            node* temp,*temt;
            head = NULL;
            temt = head;
            do
            {
                cout << "\nQueue\n\n";
                cout << "\nPress 1 to push \n";
                cout << "Press 2 to pop\n";
                cout << "Press 3 to print front element\n";
                cout << "Press 4 to Exit.\n";
                cout << "Enter choice: ";
                cin >> choice;
                if(choice == 1)
                {
                    cout << "\nPush\n\n";
                    int item,loc;
                    cout << "Enter the element you wish to push: ";
                    cin >> item;
                    if(head == NULL)
                    {
                        temp = new node();
                        temp->info = item;
                        temp->link = NULL;
                        head = temp;
                        temt = head;
                    }
                    else
                    {
                        temt = mpush(item,temt);
                    }
                    cout << "\nQueue : ";
                    print(head);
                }
                else if(choice == 2)
                {
                    cout << "\nPop\n\n";
                    if(head == NULL)
                    {
                        cout << "\nQueue is empty!!\n\n";
                    }
                    else
                    {
                        head = pop(head);
                        cout << "\nQueue : ";
                        print(head);
                    }
                }
                else if(choice == 3)
                {
                    cout << "\nFront\n\n";
                    cout << "Front element is " << head->info << endl;
                }
            }
            while(choice != 4);
        }
    }
    while(choice2 != 3);


    return 0;
}
