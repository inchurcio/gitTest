#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head);
void print_data(struct node *head);
void add_at_end(struct node *head, int data);

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link->link->link = current;

    count_of_nodes(head);

    print_data(head);

    add_at_end(head, 5);

    print_data(head);

    return 0;
}

void count_of_nodes(struct node *head)
{
    struct node *ptr = head;
    int count = 0;
    if (ptr == NULL)
    {
        cout << "Linked List is empty." << endl;
        return;
    }
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    cout << "Count of nodes in the linked list: " << count << endl;
}

void print_data(struct node *head)
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        cout << "Linked List is empty." << endl;
        return;
    }
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr , *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;

    cout << "Node with data " << data << " added at the end." << endl;
}