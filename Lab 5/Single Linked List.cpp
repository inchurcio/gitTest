#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head);
void print(struct node *head);

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