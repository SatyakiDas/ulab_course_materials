#include <iostream>

using namespace std;

struct SLLNode
{
    int data;
    SLLNode* next;
};

SLLNode* createSLLNode(int data)
{
    SLLNode* node = new SLLNode;
    node->data = data;
    node->next = NULL;

    return node;
}

void deleteSLLNode(SLLNode* node)
{
    delete node;
}

SLLNode* insert_last(SLLNode* head, int data)
{
    if(head == NULL)
    {
        head = createSLLNode(data);

        return head;
    }

    SLLNode* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = createSLLNode(data);

    return head;
}

void printSinglyLinkedList(SLLNode* head)
{
    cout << "[";
    if(head != NULL)
    {
        SLLNode* temp = head;
        cout << temp->data;
        temp = temp->next;

        while(temp != NULL)
        {
            cout << ", " << temp->data;
            temp = temp->next;
        }
    }
    cout << "]" << endl;
}

int main()
{
    SLLNode* head = NULL;

    while(true)
    {
        cout << "1: Insert\n2: Print\n0: Quit" << endl;
        int choice;
        cin >> choice;
        if(choice == 1)
        {
            int value;
            cout << "Enter value to be inserted: ";
            cin >> value;
            head = insert_last(head, value);
        }
        else if(choice == 2)
        {
            printSinglyLinkedList(head);
        }
        else if(choice == 0) break;
    }

    return 0;
}
